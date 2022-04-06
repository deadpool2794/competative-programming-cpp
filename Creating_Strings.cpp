#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        // cout << s << "\n"
        vector<string> v_s;
        v_s.push_back(s);
        while (next_permutation(s.begin(), s.end()))
            v_s.push_back(s);
        
        cout << v_s.size() << "\n";
        for (string i : v_s)
            cout << i << "\n";
    }
    return 0;
}
