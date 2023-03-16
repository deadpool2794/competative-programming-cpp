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
        if (n * 3 == x)
            cout << "YES\n"
                 << n << " 0 0";
        else if (x == 0)
            cout << "YES\n0 0 " << n ;
        else if (x == (n * 3 - 1) || x == (n * 3 - 2) || x == (n * 3 - 5))
            cout << "NO";
        else
        {
            cout << "YES\n";
            if (x % 3 == 0)
            {
                cout << x / 3 << " 0 " << (n - ((x / 3 + 1) -1)) ;
            }
            else if (x % 3 == 1)
            {
                cout << (x / 3 + 1) << " 2 " << (n - ((x / 3 + 1) + 2)) ;
            }
            else
                cout << (x / 3 + 1) << " 1 " << (n - ((x / 3 + 1) + 1)) ;
        }
        cout << "\n";
    }
    return 0;
}
