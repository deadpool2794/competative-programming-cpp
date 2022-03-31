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
        string s;
        cin >> s;
        int odd_0 = 0, odd_1 = 0, even_0 = 0, even_1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                if (s[i] == '0')
                    odd_0++;
                else
                    odd_1++;
            }
            else
            {
                if (s[i] == '0')
                    even_0++;
                else
                    even_1++;
            }
        }
        cout << max(min(odd_1, even_0), min(even_1, odd_0)) << "\n";
    }
    return 0;
}
