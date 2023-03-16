#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int ashish, pizza, burger;
        cin>> ashish>>pizza>>burger;
        if(ashish >= pizza ){
            cout<<"PIZZA\n";
        } else if (ashish >= burger){
            cout<<"BURGER\n";
        }else{
            cout<<"NOTHING\n";
        }
    }
    return 0;
}