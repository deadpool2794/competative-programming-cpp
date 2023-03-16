#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        float n;
        cin>> n;
        float m = (0.143*n);
        float p = pow(m, n);
        if((p - (int)p) < 0.5) cout << (int)p<<"\n";
        else cout<<((int)p + 1)<<"\n";  

    }
    return 0;
}