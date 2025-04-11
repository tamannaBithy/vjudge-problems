#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int last = s.size() - 1;
//         string x;
//         int b = 0;
//         int B = 0;
//         for (int i = last; i >= 0; i--)
//         {
//             if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b')
//             {
//                 if (b == 0)
//                     x.push_back(s[i]);
//                 else
//                     b--;
//             }
//             else if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B')
//             {
//                 if (B == 0)
//                     x.push_back(s[i]);
//                 else
//                     B--;
//             }
//             else if (s[i] == 'b')
//                 b++;
//             else if (s[i] == 'B')
//                 B++;
//         }

//         reverse(x.begin(), x.end());
//         cout << x << endl;
//     }

//     return 0;
// }

/////////////// second solution ////////////////

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> sm, cp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B')
                cp.push(i);
            if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b')
                sm.push(i);
            if (s[i] == 'B' && !cp.empty())
            {
                s[cp.top()] = '1';
                cp.pop();
            }

            if (s[i] == 'b' && !sm.empty())
            {
                s[sm.top()] = '1';
                sm.pop();
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'B' & s[i] != 'b' & s[i] != '1')
                cout << s[i];
        }
        cout << endl;
    }

    return 0;
}