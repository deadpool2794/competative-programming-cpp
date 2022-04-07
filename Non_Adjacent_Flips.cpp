#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int len, ct = 0;
        cin >> len;
        string bin;
        cin >> bin;
        for (int i = 0; i < len; i++)
        {
            if (bin[i] == '1')
                ct = 1;
            if (i + 1 < len)
            {
                if (bin[i] == bin[i + 1] && bin[i] == '1')
                {
                    ct = 2;
                    break;
                }
            }
        }
        cout << ct << "\n";
    }
    return 0;
}
