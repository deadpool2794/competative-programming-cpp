#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<pair<int, int>> steps;

int getHelper(int s, int e)
{
    if (s + e == 3)
        return 3;
    if (s + e == 4)
        return 2;
    return 1;
}

void solve(int n, int start, int end)
{
    if (n == 1)
    {
        steps.push_back({start, end});
        return;
    }
    int helper = getHelper(start, end);
    if (n == 2)
    {
        steps.push_back({start, helper});
        steps.push_back({start, end});
        steps.push_back({helper, end});
        return;
    }

    solve(n - 1, start, helper);
    steps.push_back({start, end});
    solve(n-1, helper, end);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n, 1, 3);
    }
    cout << steps.size() << "\n";
    for (auto step : steps)
    {
        cout << step.first << " " << step.second << "\n";
    }
    return 0;
}
