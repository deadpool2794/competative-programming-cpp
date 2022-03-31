#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll getMax(int arr[], int n)
{
    int mx = 0, ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (mx < arr[i])
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll max_1st = getMax(arr, n), max_2nd = getMax(arr, n);
        // cout << max_1st << " " << max_2nd << "\n";
        if (max_1st - max_2nd <= 1)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
