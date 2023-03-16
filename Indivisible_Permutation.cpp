#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n)
{
    cout << 1 << " ";
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i + 1;
        }
        else
        {
            cout << i - 1;
        }
        cout << " ";
    }
}

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
        if (n % 2 == 1)
            solve(n);
        else
        {
            cout << n << " ";
            for (int i = 1 ; i < n; i++) cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}
