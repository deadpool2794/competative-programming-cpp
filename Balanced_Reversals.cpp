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
        int n, ct = 0;
        cin >> n;
        string s;
        cin >> s;
        for (char i : s)
        {
            if (i == '0')
                cout << '0';
            else
                ct++;
        }
        while (ct--)
            cout << '1';
        cout << "\n";
    }
    return 0;
}
