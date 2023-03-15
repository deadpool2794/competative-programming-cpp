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
        int n, x;
        cin >> n >> x;
        int rem = n % 3;
        int quo = n / 3;
        cout << (quo * 2 * x) + (rem * x) << "\n";
    }
    return 0;
}
