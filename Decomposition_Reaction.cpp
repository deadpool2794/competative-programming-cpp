#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll M = 1e9+7;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m;
    cin >> n >> m;
    ll Q[n + 1];
    Q[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> Q[i];
    }
    while (m--)
    {
        ll ci, xi;
        cin >> ci >> xi;
        ll m[(2 * xi) + 1];
        m[0] = 0;
        for (ll i = 1; i <= (2 * xi); i++)
        {
            cin >> m[i];
        }

        for (ll i = 2; i <= (2 * xi); i += 2)
        {
            Q[m[i]] += ((m[i - 1] % M) * (Q[ci] % M)) % M;
        }
        Q[ci] = 0;
    }
    for (ll i = 1; i <= n; i++)
        cout << Q[i] << "\n";

    return 0;
}
