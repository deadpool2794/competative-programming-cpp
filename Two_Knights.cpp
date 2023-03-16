#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cout << (((i * i * i * i) - ((9) * i * i) + (24 * i) - 16) / 2) << "\n";
    }

    return 0;
}