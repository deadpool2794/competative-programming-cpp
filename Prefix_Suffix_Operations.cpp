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
        int n, ct=0;
        cin >> n;
        ll A[n], B[n];
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];

        for (int i = 0; i < n; i++) {
            if (A[i] <= B[i]) ct++;
            else break;
        }
        for (int i = n-1; i <= 0; i++) {
            if (A[i] <= B[i]) ct++;
            else break;
        }

        if (ct == n)cout << "ho" << "\n";
        else cout << -1 << "\n";

        
        
    }
    return 0;
}
