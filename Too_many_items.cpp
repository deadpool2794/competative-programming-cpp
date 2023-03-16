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
        int tot;
        cin >> tot;
        int bags = tot / 10;
        if (tot % 10 == 0)
            cout << bags;
        else
            cout << bags + 1;
        cout << "\n";
    }
    return 0;
}