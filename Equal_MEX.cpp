#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        ll tot, ct = 0;
        bool isTrue = false;
        cin >> n;
        int arr[n + 1] = {0};
        tot = n << 1;
        while (tot--)
        {
            int el;
            cin >> el;
            arr[el] += 1;
        }
        
        for (int i = 0; i < n + 1; i++)
        {
            if (ct <= n){
                if (arr[i] == 0){
                    isTrue = true;
                    break;
                }
                ct += arr[i];
            }else break;
        }
        if (isTrue) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}