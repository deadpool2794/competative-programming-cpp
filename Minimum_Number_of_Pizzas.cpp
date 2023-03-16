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
        ll n, s;
        cin >> n >> s;
        ll gcd = __gcd(n, s);
        ll lcm = (n*s)/gcd;
        cout << lcm/s << "\n";
        }
    return 0;
}
