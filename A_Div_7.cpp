#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
         n /= 10;
            n *= 10;
        while(n%7 != 0){
           
            n++;
        }
        cout<<n<<"\n";
    }
    return 0;
}