#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    string arr[1010];
    arr[1] = "a";
    char alphabet = 'b';
    
    
    
    for(int i = 2; i < 1010; i++){
        arr[i] = arr[i-1]+ alphabet;
        alphabet += 1;
        if(i % 26 == 0 ){
            alphabet = 'a';
        }
    }


    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cout<<arr[n]<<"\n";
    }

    return 0;
}