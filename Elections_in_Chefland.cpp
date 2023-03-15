#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int xa, xb, xc;
        cin >> xa >> xb >> xc;
        if (xa > 50)
        {
            cout << "A\n";
        }
        else if (xb > 50)
        {
            cout << "B\n";
        }
        else if (xc > 50)
        {
            cout << "C\n";
        }
        else
        {
            cout << "NOTA\n";
        }
    }
    return 0;
}