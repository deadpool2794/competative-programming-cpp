#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n ,ct = 0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < n; i++){
            if(s[i] == s[i+1]){
                i++;
            }
            ct++;
        }
        cout << ct << "\n";
    }
    return 0;
}
