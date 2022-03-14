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
        int n, k;
        cin >> n >> k;
        int arr[n+1];
        for (int i = 1; i <= n; i++) arr[i] = i;

        if (n != 1 && k == 1){
            cout << -1 <<"\n";
            continue;
        }

        int i = n, temp = n;
        while(temp != k){
            swap(arr[i], arr[i-1]);
            temp--;i--;
        }

        for (int i = 1; i <=n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}