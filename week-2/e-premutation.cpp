#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> rows(n, vector<int>(n - 1));
        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> rows[i][j];
            }
            freq[rows[i][0]]++;
        }

        int firstElement = -1;

        for (auto [num, count] : freq)
        {
            if (count == n - 1)
            {
                firstElement = num;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (rows[i][0] != firstElement)
            {
                cout << firstElement << " ";
                for (int num : rows[i])
                    cout << num << " ";
                cout << endl;
                break;
            }
        }
    }

    return 0;
}