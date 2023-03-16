#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int getDiff(string &s1, string &s2){
    int diff = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]!= s2[i]) diff++;
    }
    return diff;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, mid;
        cin >> n >> k;
        string s;
        cin >> s;
        string s1 = "", s2 = "";
        mid = n / 2;
        for (int i = 0; i < mid; i++)
        {
            s1 += s[i];
        }
        if (n & 1)
        {
            for (int i = (n - 1); i > mid; i--)
            {
                s2 += s[i];
            }
        }
        else
        {
            for (int i = (n - 1); i >= mid; i--)
            {
                s2 += s[i];
            }
        }
        cout << s1 << " " << s2 << endl;

        int diff = getDiff(s1, s2);
        if (diff == k)
            cout << "YES\n";
        else
            cout << "NO\n";


    }
    return 0;
}