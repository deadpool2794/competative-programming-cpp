#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, sum;
    cin >> n;
    sum = (n * (n + 1)) / 2;

    if (sum % 2 == 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        vector <int> v;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            /* code */
            arr[i] = i+1;
        }
        ll req = sum/2;
        

        for(ll i = n; i> 0; i-- ){
            if (arr[i-1] <= req){
                v.push_back(arr[i-1]);
                req -= arr[i-1];
                arr[i-1] = 0;
            }
        }

        ll v_size = v.size();
        cout<<v_size<<"\n";

        for(ll i = 0; i< v_size; i++){
            cout<<v[i]<<" ";
        }

        cout<<"\n"<<(n -v_size)<<"\n";
        
        for (ll i = 0; i< n; i++){
            if (arr[i] != 0){
                cout<<arr[i]<<" ";
            }
        }


    }

    return 0;
}