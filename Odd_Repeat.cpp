#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);


    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        /* code */
        ll n,k,s, sum, rem;
        cin>>n>>k>>s;
        k = k - 1;
        sum = n*n;
        rem = s-sum;
        cout<< (rem/k)<<"\n";

    }
    




    return 0;
}