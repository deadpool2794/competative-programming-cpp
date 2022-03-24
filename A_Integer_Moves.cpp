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
        int x, y;
        cin >> x >> y;
        ll dis = ((x * x) + (y * y));
        ll sq = sqrt(dis);
        if (dis == 0)
            cout << 0;
        else if (dis == sq * sq)
            cout << 1;
        else
            cout << 2;
        cout << "\n";
    }
    return 0;
}
