#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        int req = ((p+q+r) / 2) + 1;
        if ((a + b + r) >= req || (a + q + c) >= req || (p + b + c) >= req) cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}