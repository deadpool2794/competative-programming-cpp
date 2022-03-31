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
        string s;
        cin >> s;
        int n = s.size();
        int ct = 0;
        char del = '0';
        for (int i = 0; i < n; i++)
        {
            if (s[i] == del)
                continue;
            // cout << s << "\n";
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    ct += j - i - 1;
                    for (int k = i; k <= j; k++)
                        s[k] = del;
                    break;
                }
            }
            if (s[i] != del)
                ct++;
        }
        cout << ct << "\n";
    }
    return 0;
}
