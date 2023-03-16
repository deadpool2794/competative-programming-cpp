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
        int n;
        cin >> n;
        int ct_0 = 0, ct_not_0 = 0;
        while (n--)
        {
            int n;
            cin >> n;
            if (n == 0)
                ct_0 += 1;
            else
                ct_not_0 += 1;
        }
        cout << max(ct_0, ct_not_0) << "\n";
    }
    return 0;
}
