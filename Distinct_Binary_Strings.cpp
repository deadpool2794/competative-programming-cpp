#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
        int len , cnt = 1;
        cin >> len;
        string s;
        cin >> s;
        char prev = s[0];
        for(char i : s){
            if (prev != i) cnt += 1 ;
            prev = i;
        }
        cout << cnt << "\n";
    }
    return 0;
}