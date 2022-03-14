#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 1e5+10;

const int mod = 1e9+7;

ll arr[N];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    arr[1] = 1;
    for(int i = 2; i < N ; i++){
        arr[i] = (arr[i] * 2ll) % mod;  
    }


    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << arr[n]<< "\n";
    }   
     return 0;
}