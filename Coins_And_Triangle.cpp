#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 1e5+10;
long long arr[N];


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    arr[1] = 1;
    for (ll i = 2; i < 1e5 + 9; i++)
    {
        arr[i] = arr[i-1] + i ;
    }

    for (int i = 1; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    
    return 0;
}