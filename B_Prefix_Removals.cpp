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
        unordered_map<char, int> m;
        for (char i : s)
            m[i] += 1;
        int i;
        for (i = 0; i < n; i++)
        {
            if (m[s[i]] > 1)
                m[s[i]] -= 1;
            else
                break;
        }
        for (; i < n; i++)
            cout << s[i];
        cout << "\n";

        // for(auto i : m) cout << i.first << " " << i.second << "\n";
    }
    return 0;
}
