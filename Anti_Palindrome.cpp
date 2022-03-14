#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string formString(map<int, string> &m)
{
    auto i = *m.begin();
    string s = "";
    for (int j = 0; j < i.first; j++)
    {
        s += i.second;
    }
    m.erase(i.first);
    return s;
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
        cin >> n;
        string s;
        cin >> s;
        if (n & 1)
            cout << "NO\n";
        else
        {
            unordered_map<char, int> m;
            for (char c : s)
                m[c] += 1;
            int mx = 0;
            for (auto i : m)
                mx = max(mx, i.second);
            if (mx > (n / 2))
                cout << "NO\n";

            else
            {
                map<int, string> orderedMap;
                for (auto i : m)
                {
                    orderedMap[i.second] += i.first;
                }

                cout << "YES\n";
                string antiPal = "";
                // for (auto i : orderedMap)
                // {
                //     cout << i.first << " " << i.second << "\n";
                // }
                while (orderedMap.size() != 0)
                {
                    string part = formString(orderedMap);
                    antiPal += part;
                }
                cout << antiPal << "\n";
            }
        }
    }
    return 0;
}