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
        int x, y;
        cin >> x >> y;
        x = x - y;
        if (x == 0) cout << (y + y - 1) << "\n";
        else cout << ((2*y)+x) << "\n"; 
    }
    return 0;
}