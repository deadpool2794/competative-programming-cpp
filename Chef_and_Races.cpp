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
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if (x != a && x != b && y != a && y != b)
            cout << 2;
        else if ((x == a && y == b) || (x == b && y == a))
            cout << 0;
        else
            cout << 1;
        cout << "\n";
    }
    return 0;
}
