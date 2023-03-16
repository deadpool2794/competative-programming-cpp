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
        int u, v, a, s;
        cin >> u >> v >> a >> s;
        ll V = v * v;
        if (((u * 1LL * u) - (2 * a * s)) <= V)
            cout << "Yes";
        else
            cout << "No";
        cout << "\n";
    }
    return 0;
}
