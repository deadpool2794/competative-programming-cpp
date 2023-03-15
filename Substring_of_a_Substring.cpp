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
        string s;
        cin >> s;
        int n = s.length(), curr_ct = 0;
        int len = INT_MIN;
        char init = s[0], last = s[n - 1];
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == init || s[i] == last)
            {
                len = max(curr_ct, len);
                curr_ct = 0;
            }
            else
                curr_ct++;
        }
        if ((len == 0 && curr_ct == 0) || n == 2 || n == 1)
            cout << -1;
        else
            cout << max(len, curr_ct);
        cout << "\n";
    }
    return 0;
}




