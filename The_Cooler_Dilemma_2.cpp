#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y % x)
            cout << y / x;
        else
            cout << (y/x) -1;
        cout << "\n";
    }
    return 0;
}
