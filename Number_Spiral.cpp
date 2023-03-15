#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll tc;
    cin >> tc;
    for (ll i = 0; i < tc; i++)
    {
        ll m, n;
        cin >> m >> n;
        if (m % 2 == 1 && n % 2 == 1)
        {
            if (m >= n)
            {
                cout << (((m - 1) * (m - 1)) + n) << "\n";
            }
            else
            {
                cout << ((n * n) - m + 1) << "\n";
            }
        }
        else if (m % 2 == 1 && n % 2 == 0)
        {
            if (m > n)
            {
                cout << (((m - 1) * (m - 1)) + n)<<"\n";
            }
            else
            {
                cout << (((n - 1) * (n - 1)) + m) << "\n";
            }
        }
        else if (m % 2 == 0 && n % 2 == 1)
        {
            if (m > n)
            {
                cout << ((m * m) - n + 1) << "\n";
            }
            else
            {
                cout << ((n * n) - m + 1) << "\n";
            }
        }
        else
        {
            if (m > n)
            {
                cout << ((m * m) - n + 1) << "\n";
            }
            else
            {
                cout << (((n - 1) * (n - 1)) + m) << "\n";
            }
        }
    }
    return 0;
}