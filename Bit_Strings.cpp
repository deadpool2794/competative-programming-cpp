#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
    ll req = 1;
    ll mod_value = pow(10ll, 9ll);
    mod_value += 7ll;
    for (int i = 0; i< n; i++){
        req = (req%mod_value) * 2;
    }
    cout<<(req%mod_value);
    return 0;
}