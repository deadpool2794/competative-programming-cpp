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
        cin >> n;
        if (n > 19)
            cout << "NO"<<"\n";
        else
        {
            cout << "YES"
                 << "\n";
            int num = 1;
            cout << num << " ";
            while(--n){
                num = num * 3;
                cout << num << " ";
            }
            cout <<"\n";
        }

    }
    return 0;
}