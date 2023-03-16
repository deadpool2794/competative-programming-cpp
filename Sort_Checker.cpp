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
        int n;
        cin >> n;
        int A[n], B[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < n; i++)
            cin >> B[i];
        unordered_map<int, int> ct_A, ct_B;
        for (int i = 0; i < n; i++)
            ct_A[A[i]] += 1;
        for (int i = 0; i < n; i++)
            ct_B[B[i]] += 1;
        bool flag1 = true, flag2 = true;
        if (ct_A != ct_B)
            flag1 = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (B[i] > B[i + 1])
            {
                flag2 = false;
                break;
            }
        }
        // cout << flag1 << " " << flag2 << "\n";
        if (flag1 && flag2)
            cout << "yes";
        else
            cout << "no";
        cout << "\n";
    }
    return 0;
}
