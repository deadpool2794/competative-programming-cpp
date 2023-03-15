#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int getGcd(ll b, ll c)
{
    if (b == 0)
        return c;
    return getGcd((c % b), b);
}
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll b, c;
        cin >> b >> c;
        int g = getGcd(b, c);
        cout << c / g << "\n";
    }
    return 0;
}