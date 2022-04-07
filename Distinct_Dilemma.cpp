#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, ct = 0;
        cin >> n;
        while (n--)
        {
            int el;
            cin >> el;
            sum += el;
        }
        for(int i = 1; true; i++){
            if (sum < i) break;
            sum -= i;
            ct ++;
        }
        cout << ct << "\n";
    }
    return 0;
}
