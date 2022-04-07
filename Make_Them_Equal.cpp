#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        int n, odd_ct = 0, even_ct = 0;
        cin >> n;
        while(n--){
            int el;
            cin >> el;
            if(el&1) odd_ct++;
            else even_ct++;
        }
        if(odd_ct == 0 || even_ct == 0){
            cout << 0 << "\n";
            continue;
        }
        if(odd_ct&1) {
            cout <<  even_ct;
        }else{
            cout << min(even_ct, (odd_ct/2));
        }
        cout << "\n";
    }
    return 0;
}
