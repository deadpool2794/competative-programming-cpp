#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, rem;
    cin>>n;
    while(n> 0){
        rem = n % 10;
        n = n / 10;
        cout<<rem;
    };
    return 0;
}