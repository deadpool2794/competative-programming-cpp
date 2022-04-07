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
        int p;
        cin >> p;
        if (p % 4)
            cout << (p / 4) + 1;
        else
            cout << p / 4;
        cout << "\n";
    }
    return 0;
}
