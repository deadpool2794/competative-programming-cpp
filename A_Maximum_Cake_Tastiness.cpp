#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll getMax(ll arr[], int n)
{
    ll mx = 0, ind;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            ind = i;
        }
    }
    arr[ind] = 0;
    return mx;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll first = getMax(arr, n);
        ll second = getMax(arr, n);
        cout << first + second << "\n";
    }
    return 0;
}
