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
        ll x, a, b;
        cin >> x >> a >> b;
        ll quo = x / a;
        if (((a * quo) == x) && (a != b))
            cout << b * quo;
        else
            cout << -1;
        cout << "\n";
    }

    return 0;
}