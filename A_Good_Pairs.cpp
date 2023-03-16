#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int mn = INT_MAX, mx = 0, mn_ind = 0, mx_ind = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            if(mn > arr[i]){
                mn = arr[i];
                mn_ind = i;
            }
            if(mx < arr[i]){
                mx = arr[i];
                mx_ind = i;
            }
        }

        cout << mx_ind+1 << " " << mn_ind+1 << "\n";
        
        
    }
    return 0;
}
