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
        int n, pos;
        cin >> n >> pos;
        cout << ((2 * n) + 1) - pos << "\n";
    }
    return 0;
}
