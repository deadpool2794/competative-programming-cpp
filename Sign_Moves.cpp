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
        ll n;
        cin >> n;
        ll mag = n/2, sign = -1;
        if(n&1) cout << (sign * (mag+1));
        else cout << mag;
        cout << "\n";
      
    }
    return 0;
}
