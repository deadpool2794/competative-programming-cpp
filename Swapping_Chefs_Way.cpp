#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(string &s)
{
    int prev = int(s[0]);
    for (char i : s)
    {
        if (int(i) < prev)
            return false;
        prev = int(i);
    }
    return true;
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
        char temp;
        cin >> n;
        string s;
        cin >> s;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (int(s[i]) > int(s[j]))
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            i++;
            j--;
        }
        if (check(s))
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
