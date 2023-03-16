#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 1e5 +10;
int arr[N];

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    arr[1] = 1;
    for (int i = 2; i< N; i++){
        arr[i] =i ^ (i-1);
    }

    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      for(int i = 1; i <= n; i++){
          cout<<arr[i]<<" ";
      }
      cout<<"\n";
    }
    return 0;
}