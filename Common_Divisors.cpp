#include <bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
int arr[N];
typedef long long ll;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int mx = 1, n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int n;
        cin>>n;
        arr[n] += 1;
    }


    for(int i = 2; i< N; i++){
        int curr_ct = 0;
        for(int j = i; j < N; j+= i){
            if(arr[j] != 0){
                curr_ct += arr[j];
            }
            if (curr_ct > 1){
                mx = max(i, mx);
            }
        }
    }
    cout<< mx;


    return 0;
}