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
        int n, k, ct = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int i, sum = 0;
        for (i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum <= k)
                ct++;
            else
            {
                sum -= arr[i];
                sum += ceil(arr[i] / float(2));
                if (sum <= k)
                    ct++;
                break;
            }
        }

        cout << ct;
        cout << "\n";
        // for(int i = 0; i < n; i++) cout << arr[i] << " ";
    }
    return 0;
}
