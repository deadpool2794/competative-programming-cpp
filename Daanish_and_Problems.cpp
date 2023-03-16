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
        int arr[10];
        for (int i = 0; i < 10; i++)
            cin >> arr[i];
        
        int k;
        cin >> k;
        for (int i = 9; i >= 0; i--)
        {
            k -= arr[i];
            if(k < 0){
                cout << i+1 << "\n";
                break;
            }
        }
        
    }
    return 0;
}
