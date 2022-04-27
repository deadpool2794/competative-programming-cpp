#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 20;
int arr[N];
ll mn = 1e18;
vector<ll> part1(1, 0), part2(1, 0);

unsigned long long abs(unsigned long long a)
{
    if (a < 0)
        a *= -1;
    return a;
}

void getMin(int n)
{
    if (n < 0)
    {
        unsigned long long sum1 = accumulate(part1.begin(), part1.end(), 0);
        unsigned long long sum2 = accumulate(part2.begin(), part2.end(), 0);
        if (abs(sum1 - sum2) < mn)
        {
            mn = abs(sum1 - sum2);
            // cout << "part1\t";
            // for (int i : part1)
            //     cout << i << " ";
            // cout << "\n";
            // cout << "part2\t";
            // for (int i : part2)
            //     cout << i << " ";
            // cout << "\n diff    " << mn << "\n";
        }

        return;
    }
    part1.push_back(arr[n]);
    getMin(n - 1);
    part1.pop_back();
    part2.push_back(arr[n]);
    getMin(n - 1);
    part2.pop_back();
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        getMin(n - 1);
        cout << mn;
    }
    return 0;
}
