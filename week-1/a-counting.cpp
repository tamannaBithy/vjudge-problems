#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int counting = 0;
//     for (int i = a; i <= b; i++)
//     {
//         counting++;
//     }

//     cout << counting;
//     return 0;
// }

////// more optimized way

int main()
{
    int a, b;
    cin >> a >> b;

    if (a <= b)
        cout << (b - a + 1);
    else
        cout << 0;
    return 0;
}