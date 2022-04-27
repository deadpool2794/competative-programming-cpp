#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(int freq, int len)
{
    if (freq != len)
    {
        int ct = 0;
        while ((freq * 2) < len)
        {
            ct += 1;
            ct += freq;
            freq *= 2;
        }
        return ct + 1 + (len - freq);
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int el;
            cin >> el;
            m[el] += 1;
        }
        int mx_frq = 0;
        for (auto i : m)
        {
            if (i.second > mx_frq)
                mx_frq = i.second;
        }
        cout << solve(mx_frq, n) << "\n";
    }
    return 0;
}
