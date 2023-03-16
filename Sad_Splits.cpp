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
        string n;
        cin >> n;
        bool flag = false;
        int sz = n.size();
        if ((n[sz - 1] - '0') % 2 == 0)
        {

            for (int i = 0; i < sz - 1; i++)
            {
                if (((n[i] - '0') % 2) == 0)
                {
                    flag = true;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < sz - 1; i++)
            {
                if (((n[i] - '0') % 2) == 1)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }

    return 0;
}
