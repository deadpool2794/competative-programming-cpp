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
        int k;
        cin >> k;
        
        int count = 0;
        while(1){
            if((k % 2) == 0){
                k = k /2;
                count ++;
                
            }else{
                
                break;
            }

        }
        cout<<count<<"\n";
    }

    return 0;
}