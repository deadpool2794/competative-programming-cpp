#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, i = 1;
        int N = 1e5 + 10;
        int arr[N] = {0};
        cin >> n;
        vector<int> v;
        while (v.size() < n){
            if (v.size() % 2 == 0){
                if (arr[i] == 0){
                    arr[i] = 1;
                    v.push_back(i);
                }
            }
            else{
                int temp = v[v.size() - 1];
                v.push_back(temp * 2);
                arr[temp * 2] == 1;
            }
            i++;
        }
        for (int i : v){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}
