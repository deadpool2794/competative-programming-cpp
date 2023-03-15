#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    ll n, k, count = 0;
    cin>>n>>k;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin>>num;
        if ((num % k) == 0){
            count++;
        }
    }
    cout<<count;
    
    return 0;
}