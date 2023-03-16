#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int getMsb(ll n)
{
    if (n == 0)
        return 0;
    int msb = 1;
    n /= 2;
    while (n)
    {
        n /= 2;
        msb++;
    }
    return msb;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int msb = getMsb(n);
        if (((1 << msb) - 1) == n)
        {
            if (n != 1) cout << n-2 << " " << n-1 << " "<< n << "\n";
            else cout << 1 << " " << 3 << " " << 5 << "\n";
        }else{
            cout << ((1 << msb)-1) << " " << 0 << " " << n<< "\n";
        }  
    }

    return 0;
}