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
        string hidden, guess;
        cin >> hidden >> guess;
        for (int i = 0; i < 5; i++)
        {
            if (hidden[i] == guess[i])
                cout << "G";
            else
                cout << "B";
        }
        cout << "\n";
    }
    return 0;
}
