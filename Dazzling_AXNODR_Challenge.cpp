
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
        ll n;
        cin >> n;
        if (n == 2 || n == 3)
            cout << 3;
        else
        {
            switch (n % 4)
            {
            case 0:
                cout << 4 * (n / 4) + 3;
                break;
            case 1:
                cout << 4 * (n / 4) + 1;
                break;
            default:
                cout << 3;
                break;
            }
        }
        cout << "\n";
        // int b = 1;
        // for (int i = 2; i < 50; i++)
        // {
        //     cout << i << "\n";
        // }
    }
    return 0;
}