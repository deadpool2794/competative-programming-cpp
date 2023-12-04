#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, sum = 0;
    cin>>n;

    for(int i = 1; i*i < n; i++){
        if (n%i == 0){
            sum += i;
        }
        cout<<sum << " ";
    }
    return 0;
}