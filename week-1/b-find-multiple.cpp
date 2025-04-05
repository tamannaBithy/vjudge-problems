#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     int ans = -1;
//     for (int i = a; i <= b; i++)
//     {
//         if (i % c == 0)
//         {
//             ans = i;
//             break;
//         }
//     }

//     cout << ans;

//     return 0;
// }

///// more optimized way

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int remainder = a % c;

    int multiple = (remainder == 0) ? a : (a + c - remainder);

    if (multiple <= b)
        cout << multiple;
    else
        cout << -1;

    return 0;
}