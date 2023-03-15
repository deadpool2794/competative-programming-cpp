#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, i;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (arr[i] < x)
                break;
        }
        cout << (i + 1) << "\n";
    }
    return 0;
}
