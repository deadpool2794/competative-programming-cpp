#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string bin;
        cin >> bin;
        int ct_0 = 0, ct_1 = 0;
        for (char i : bin)
        {
            if (i == '1')
                ct_1++;
            else
                ct_0++;
        }
        if (ct_0 == 0 || ct_1 == 0)
        {
            cout << 1;
        }
        else if (abs(ct_0 - ct_1) >= 2)
        {
            int mn = min(ct_0, ct_1);
            cout << (2 * mn) + 1;
        }
        else
            cout << ct_0 + ct_1;
        cout << "\n";
    }
    return 0;
}
