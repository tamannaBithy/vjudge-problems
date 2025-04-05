#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans;

    if (a + a - 1 >= a + b && b + b - 1)
        ans = a + a - 1;
    else if (b + b - 1 >= a + b && a + a - 1)
        ans = b + b - 1;
    else
        ans = a + b;

    cout << ans;

    return 0;
}