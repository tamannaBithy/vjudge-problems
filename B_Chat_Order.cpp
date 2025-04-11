#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> order;
    map<string, bool> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        order.push_back(s);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (!mp[order[i]])
        {
            mp[order[i]] = true;
            cout << order[i] << endl;
        }
    }

    return 0;
}
