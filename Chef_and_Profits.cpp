#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        unsigned int x, y, z;
        cin>>x>>y>>z;
        cout<<((x*z)-(x*y))<<"\n";
    }
    return 0;
}