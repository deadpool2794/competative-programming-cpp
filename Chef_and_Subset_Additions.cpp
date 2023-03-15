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
        int n, x, y;
        cin >> n >> x >> y;
        int A[n], B[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (A[i] + x == B[i] || A[i] + y == B[i])
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}