#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 0)
            cout << 1;
        else
            cout << (a + 2 * b) + 1;
        cout << "\n";
    }
    return 0;
}
