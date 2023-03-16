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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int _max, _min;
        _max = *max_element(arr, arr+n);
        _min = *min_element(arr, arr+n);

        cout << (2LL * (_max - _min)) << "\n";
    }
    return 0;
}