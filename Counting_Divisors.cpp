#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;
int arr[N];

typedef long long ll;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    arr[1] = 1;
    
    for(int i = 2; i <N; i++){
        if(arr[i] == 0){
            for(int j = 2*i; j < N; j+= i){
                arr[j] = i;
            }
        }
    }



    // for (int i = 1; i < 21; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> m;
        int n;
        cin >> n;
        while (n > 1){
            int primeFactor = arr[n];
            if (primeFactor == 0){
                primeFactor = n;
            }
            m[primeFactor] += 1;
            n /= primeFactor;
        }
        int req = 1;

        for(auto i: m){
            req *= i.second + 1;
        }
        cout<<req<<"\n";

    }

    return 0;
}