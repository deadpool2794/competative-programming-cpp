#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for(int i = 1; i<=n; i++){
        int num;
        cin>>num;
        v.push_back({num, i});
    }

    sort(v.begin(), v.end());

    for (auto i : v){
        cout<< i.first<<" "<<i.second<< "  ";
    }
    cout<<"\n";
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}