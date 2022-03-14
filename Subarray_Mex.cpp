#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n, subArrLen, MEX;
        cin >> n>> subArrLen>> MEX;
        if (subArrLen < MEX || MEX == 0){
            cout << -1 <<"\n";
            continue;
        }
        int subArr[subArrLen];
        int i = 0, num = 0;
        while(i < subArrLen){
            subArr[i] = num;
            num++;
            if (num == MEX) num = 0;
            i++;
        }
        i = 0;
        num = 0;
        while ( i < n){
            cout<<subArr[num]<< " ";
            i++;
            num++;
            if (num == subArrLen) num = 0;
        }
        cout<<"\n";
    }
    return 0;
}