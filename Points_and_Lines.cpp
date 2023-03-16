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
        int n;
        cin >> n;
        unordered_set<ll> s_x, s_y;
        while (n--)
        {
            ll x, y;
            cin >> x >> y;
            s_x.insert(x);
            s_y.insert(y);
        }

        cout << (s_x.size() + 0LL + s_y.size()) << "\n";
    }
    return 0;
}