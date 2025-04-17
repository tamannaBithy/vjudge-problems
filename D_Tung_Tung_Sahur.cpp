#include <iostream>
#include <vector>
using namespace std;

string p, s;
vector<vector<int>> memo;

bool dp(int i, int j)
{
    if (i == p.size() && j == s.size())
        return true;
    if (i == p.size() || j == s.size())
        return false;

    if (memo[i][j] != -1)
        return memo[i][j];

    if (p[i] != s[j])
        return memo[i][j] = false;

    bool one = dp(i + 1, j + 1);
    bool two = false;
    if (j + 1 < s.size() && s[j] == s[j + 1])
        two = dp(i + 1, j + 2);

    return memo[i][j] = (one || two);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> p >> s;
        memo.assign(p.size() + 1, vector<int>(s.size() + 1, -1));
        cout << (dp(0, 0) ? "YES\n" : "NO\n");
    }
}
