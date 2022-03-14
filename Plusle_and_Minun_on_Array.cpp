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
        int n, mn = INT_MAX, mx = INT_MIN, mnInd = 0, mxInd = 0, sum1 = 0, sum2 = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int el;
            cin >> el;
            el = abs(el);
            arr[i] = el;
        }
        for (int i = 0; i < n; i += 2)
        {
            if (arr[i] < mn)
            {
                mnInd = i;
                mn = arr[i];
            }
        }
        for (int i = 1; i < n; i += 2)
        {
            if (arr[i] > mx)
            {
                mxInd = i;
                mx = arr[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum1 += arr[i];
            }
            else
            {
                sum1 -= arr[i];
            }
        }
        arr[mxInd] = mn;
        arr[mnInd] = mx;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum2 += arr[i];
            }
            else
            {
                sum2 -= arr[i];
            }
        }
        int mxSum = max(sum1, sum2);

        cout << mxSum << "\n";
        // cout << mx << " " << mxInd << " " << mn << " " << mnInd << "\n" ;
    }
    return 0;
}
