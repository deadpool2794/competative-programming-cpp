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
        cin >> arr[0];
        for (int i = 1; i < n; i++){
            int el;
            cin >> el;
            arr[i] = arr[i-1]+ el;
        }

        int req = arr[n-1]/2;
        int *ptr = upper_bound(arr, arr+n, req);
        int pro_1st = *ptr;
        int pro_2nd = abs(arr[n-1] - pro_1st);
        

        int mx = max(pro_1st, pro_2nd);
        cout << mx;

        
        // for(int i : arr) cout << i << " ";
         cout << "\n";
    }
    return 0;
}