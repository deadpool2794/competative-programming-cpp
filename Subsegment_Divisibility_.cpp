#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int  i = 1;
        int count = 0;
        while (true)
        {
            if (i % 4 != 0 && i % 4 != 3){
                cout<<i<<" ";
                count += 1;
            }
            i++;
            if (count == n) break;
        }
        cout<<"\n";
        
    }
    return 0;
}