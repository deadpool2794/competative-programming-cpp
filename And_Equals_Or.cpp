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
        string s;
        cin >> s;
        int ct_0 = 0, ct_1 = 0;
        for (char i : s)
        {
            if (i == '0')
                ct_0++;
            else
                ct_1++;
        }
        cout << (n + ((ct_0 * (ct_0 -1)/2)) +( (ct_1 * (ct_1-1))/2))<< "\n";
    }
    return 0;
}