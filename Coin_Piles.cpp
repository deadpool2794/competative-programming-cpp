#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll a, b;
        cin >> a >> b;
        ll mini = min(a,b);
        ll d = abs(a - b);
        mini -= d; 
        if (mini == 0 || (mini > 0 && mini % 3 == 0)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}