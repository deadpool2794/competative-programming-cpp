#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int B[n];
        vector<int> mex;
        bool isPossible = true;
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(B[i] > i+1){
                isPossible = false;
                break;
            }
            if(B[i] >= 0) mex.push_back(B[i]);
        }
        if(!isPossible){
            cout << -1 << "\n";
        }
        else{
            sort(mex, mex+ mex.size());
            for(int i : mex) cout << i << " " ;
        }
        

        
    }
    return 0;
}
