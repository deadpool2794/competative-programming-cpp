#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, num = 96;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int sum = 0;
        string name;
        cin >> name;
        sort(name.begin(), name.end());

        for (int i = 1; i < name.length() + 1; i++)
        {
            sum += ((int(name[i - 1]) - num) * i);
        }

        cout << sum << "\n";
    }

    return 0;
}