#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> servers;

    while (n--)
    {
        string a, b;
        cin >> a >> b;
        servers.push_back({a, b});
    }

    while (m--)
    {
        string c, d;
        cin >> c >> d;
        d.pop_back(); /// laster ; bad deyar jonno kora hoice

        for (auto [a, b] : servers)
        {
            if (d == b)
            {
                cout << c << " " << b << ";" << " #" << a << endl;
                break;
            }
        }
    }

    return 0;
}