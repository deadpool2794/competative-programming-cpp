#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll M = 998244353;
const int N = 1e5 + 10;
ll arr[N];

ll convert(int sub[] , int sz)
{

    ll dec = 0;
    for (int i = 0; i < sz; i++)
    {

        dec += (sub[i] * arr[sz-i-1]) % M;
        dec %= M;
    }
    return dec;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    arr[0] = 1;
    arr[1] = 2;

    for (int i = 2; i < N; i++)
    {
        arr[i] = ((arr[i - 1] % M) * 2) % M;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans[n];
        ans[0] = int(s[0]) - 48;
        ans[1] = ans[0];
        for (int i = 2; i < n; i += 2)
        {
            int el = int(s[i]) - 48;
            ans[i] = el ^ ans[i - 1];
            ans[i + 1] = ans[i];
        }
        cout << convert(ans, n);
        cout << "\n";
    }

    return 0;
}
