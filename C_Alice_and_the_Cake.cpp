#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void isPossible(ll tot, unordered_map<int, int> &m)
{
    if (m[tot] == 0){
        if (tot > 2){
            int fl_value = floor(tot / float(2));
            int cl_value = ceil(tot / float(2));
            cout << fl_value << " " << cl_value << "\n";
            isPossible(fl_value, m);
            isPossible(cl_value, m);
        }}
    else
        m[tot]--;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        ll arr[n];
        ll tot = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            m[arr[i]]++;
            tot += arr[i];
        }
        isPossible(tot, m);
        for (auto i : m){
            cout << i.first << " " << i.second << '\n';
        }
        cout << "\n";
    }
    return 0;
}
