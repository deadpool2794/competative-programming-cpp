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
        int sat = n / 7;
        if (n % 7 == 6)
            cout << sat + 1;
        else
            cout << sat << " ";
        cout << "\n";
    }
    return 0;
}
