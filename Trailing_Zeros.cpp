#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll count_5 = 0;
    while (n >= 5)
    {
        count_5 += n / 5;
        n = n / 5;
    }
    cout << count_5;

    return 0;
}