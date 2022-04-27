#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
    if(a%b == 0) return b;
    return gcd(b%a, a);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1 || b == 1)
            cout << -1;
        else
        {
            ll g = gcd(a, b);
            if(g == 1) cout << 1;
            else cout << 0;
        }
        cout << "\n";
    }
    return 0;
}
