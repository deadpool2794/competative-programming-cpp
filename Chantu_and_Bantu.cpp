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
        int n, tot;
        cin >> n >> tot;
        int gifts[tot];
        for (int i = 0; i < tot; i++)
            cin >> gifts[i];
        sort(gifts, gifts + tot);
        ll mn = 0;
        for (int i = 0; i < n; i++)
            mn += gifts[i];
        cout << mn << "\n";
    }
    return 0;
}
// 187670944