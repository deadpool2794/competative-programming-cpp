#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int a[3];
        cin>>a[0]>>a[1];
        a[2] = abs(a[0]-a[1]);
        cout<<*min_element(a, a+3)<<"\n";
    }
    return 0;
}