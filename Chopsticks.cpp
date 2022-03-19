#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, d, ct = 0;
    cin >> n >> d;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] <= d)
        {
            ct++;
            i++;
        }
    }
    cout << ct;

    return 0;
}
