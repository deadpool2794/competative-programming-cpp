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
        int a, b, c;
        cin >> a;
        cin >> b;
        if (a+b < 11) cout << -1;
        else cout << (21 - (a + b));
        cout << "\n";
    }
    return 0;
}