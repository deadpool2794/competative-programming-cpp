#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    // int init = 1;
    // for (int i = 2; i <= 257; i++){

    //     cout << init << " ";
    //     init |= i;
    // }
    ll arr[32], pow2[32];
    arr[0] = 0;
    pow2[0] = 1;
    arr[1] = 0;
    pow2[1] = 2;
    ll num = 2;
    for (int i = 2; i < 32; i++)
    {
        arr[i] = arr[i - 1] + num - 1;
        num *= 2;
        pow2[i] = num;
    }

    // for (int i =0; i < 5; i++)
    //     cout << arr[i] << " " << pow2[i] << "\n";
    while (t--)
    {
        ll n;
        cin >> n;
        int i = 31;
        for (; i >= 0; i--)
        {
            if (pow2[i] <= n)
                break;
        }
        cout << arr[i]+ (n - pow2[i])<<  "\n";
    }
    return 0;
}

// 0 1
// 0 2
// 1 4
// 4 8
// 11 16

//99999973
// 100000001