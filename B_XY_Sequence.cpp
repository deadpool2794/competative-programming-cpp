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
        ll n, B, x, y, s = 0, sum = 0;
        cin >> n >> B >> x >> y;
        while (n--)
        {
            if ((s + x) <= B)
            {
                s += x;
            }
            else
            {
                s -= y;
            }
            sum += s;
        }
        cout << sum << "\n";
    }
    return 0;
}
