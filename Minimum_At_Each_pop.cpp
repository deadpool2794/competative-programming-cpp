#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    stack<ll> s;
    ll mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin>>a;
        mn = min(mn, a);
        s.push(mn);
    }

    while(s.size()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}