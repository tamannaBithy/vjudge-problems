#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i <= sqrt(n); i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        int k;
        cin >> x >> k;

        string y = "";
        for (int i = 0; i < k; ++i)
            y += x;

        if (y.size() > 18)
        {
            cout << "NO" << endl;
            continue;
        }

        long long num = stoll(y);
        cout << (isPrime(num) ? "YES" : "NO") << endl;
    }
    return 0;
}
