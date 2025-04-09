#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int evenOneA = 0, oddOneA = 0;
        int evenZeroB = 0, oddZeroB = 0;

        for (int i = 0; i < n; i++)
        {

            if (i % 2 == 0)
            {
                if (a[i] == '1')
                    evenOneA++;
                if (b[i] == '0')
                    evenZeroB++;
            }

            else
            {
                if (a[i] == '1')
                    oddOneA++;
                if (b[i] == '0')
                    oddZeroB++;
            }
        }

        if (oddZeroB >= evenOneA && evenZeroB >= oddOneA)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}