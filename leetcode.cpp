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
        int n = 7;
        vector<bool> vis(n, 0);
        for (bool i : vis)
            cout << i << " ";
        string s = "asdf";
        s += 'k';
        cout << s;
    }
    return 0;
}
