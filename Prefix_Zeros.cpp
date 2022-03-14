#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n,k,  zeros_ct = 0;
        ll ct = 0;
        cin>>n>>k;
        string s;
        cin >> s;
        bool printed = false;
        for(auto i : s){
            if(i == '0'){
                zeros_ct++;
            }else{
                ct += ( 10ll - (i - 48));
                if (ct > k){
                    printed = true;
                    cout << zeros_ct<<"\n";
                    break;
                }
                zeros_ct++;
            }
        }
        if(!printed){
            cout<<zeros_ct<<"\n";
        }
    }
    return 0;
}