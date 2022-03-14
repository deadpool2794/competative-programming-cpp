#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    ll n, mx, req=0;
    cin>>n;
    ll arr[n];
    for (ll i = 0; i < n; i++){
        cin>>arr[i];
    }
    mx = arr[0];
    for (ll i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        req+= (mx- arr[i]);
    }
    cout<<req;

    
    


    return 0;
}