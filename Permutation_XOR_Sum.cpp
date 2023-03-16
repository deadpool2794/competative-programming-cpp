#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 1e5 + 10;
ll arr[N];

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 2; i < N; i++)
    {
        arr[i] = arr[i - 1] + (2 * (i ^ (i - 1)));
    }

    int t;
    cin >> t;
    int count = 41;
    for (int i = 1; i < count; i++)
    {
         cout << arr[i] << " ";
    }

    // while (t--)
    // {
    //     ll n;
    //     cin >> n;
    //     if (n % 2 == 0)
    //     {
    //         cout << arr[n] ;
    //     }
    //     else
    //     {
    //         cout << arr[n - 1];
    //     }
    //     cout<<"\n";
    // }

    return 0;
}