#include <bits/stdc++.h>
using namespace std;

string solveTestCase(int n, const string &a, const string &b)
{
    // If the first bit of string a is 1, it's impossible to make a all zeros
    if (a[0] == '1')
    {
        return "NO";
    }

    // If a[0] is 0, we can always make the rest of a all zeros
    return "YES";
}

int main()
{
    int t;
    cin >> t; // Number of test cases

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n; // Length of bit strings

        string a, b;
        cin >> a >> b; // Input the two bit strings

        string result = solveTestCase(n, a, b);
        cout << result << endl;
    }

    return 0;
}