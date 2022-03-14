// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// const ll M = 998244353;
// const int N = 1e5 + 10;
// ll arr[N];

// void getSubStrings(vector<vector<char>> &v, string &s, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         vector<char> sub;
//         sub.push_back(s[i]);
//         v.push_back(sub);
//         for (int j = i + 1; j < n; j++)
//         {
//             sub.push_back(s[j]);
//             v.push_back(sub);
//         }
//     }
// }

// ll convert(vector<char> sub)
// {
//     int sz = sub.size() - 1;
//     ll dec = 0;
//     for (auto i : sub)
//     {
//         i = int(i) - 48;
//         dec += (i * arr[sz]) % M;
//         dec %= M;
//         sz--;
//     }
//     return dec;
// }
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     arr[0] = 1;
//     arr[1] = 2;

//     for (int i = 2; i < N; i++)
//     {
//         arr[i] = ((arr[i - 1] % M) * 2) % M;
//     }

//     // for(int i = 0; i < 50 ; i++){
//     //     cout << arr[i] << " " << pow(2LL,i) << "\n";
//     // }

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         vector<vector<char>> v;

//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         n = s.size();
//         cout << n;
//         getSubStrings(v, s, n);
//         vector<ll> dec;

//         // cout << v.size() << "\n";

//         for (auto i : v)
//         {
//             dec.push_back(convert(i));
//             // cout << convert(i) << " ";
//         }
//         ll sum = dec[0];

//         for (int i = 1; i < dec.size(); i++)
//         {
//             sum = sum ^ dec[i];
//             sum %= M;
//         }
//         cout << sum << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll M = 998244353;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    n = s.size();

    ll a[n] = {0};

    if (s[0] == '1')
    {
        a[0] = 1;
    }

    ll prev = a[0];

    for (ll i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            prev += (i + 1);
        }
        a[i] = prev;
        a[i] = a[i] % 2;
    }
    for(auto i : a){
        cout << i << " ";
    }
    cout << "\n";

    ll p = 1;
    ll ans = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            ans += p;
            ans = ans % M;
        }
        p = p * 2;
        p = p % M;
    }
    cout << ans % M << "\n";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}