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
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        int c = p / a;
        if ((q / b) == c || (q / b) == (c + 1))
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}