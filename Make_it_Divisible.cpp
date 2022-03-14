#include <bits/stdc++.h>
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
    if (n == 1) cout << 3;
    else if (n == 2) cout << 33;
    else{
        n -= 2;
        cout << 3;
        for (int i = 0; i < n; i++) cout << 0;
        cout << 3;
    } 
    cout << "\n";
}
return 0;
}
