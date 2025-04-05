#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        if (x == 100)
            cout << 0 << endl;
        else
        {
            int ans = 100 - x;
            if (ans % 10 != 0)
                cout << 10 * (ans / 10) << endl;
            else
                cout << ans << endl;
        }
    }
    return 0;
}