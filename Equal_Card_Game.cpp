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
        int k;
        cin >> k;
        int cards = 52;
        for (int i = 0; i <= 52; i++)
        {
            if (((cards - i) % k) == 0)
            {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}