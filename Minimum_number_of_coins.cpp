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
        if (n % 5 != 0)
            cout << -1;
        else if (n % 10 == 0)
            cout << (n / 10);
        else
            cout << (n / 10) + 1;
        cout << "\n";
    }
    return 0;
}
