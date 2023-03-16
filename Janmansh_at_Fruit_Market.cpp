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
        int x, a, b, c;
        cin >> x >> a >> b >> c;
        int arr[3] = {a, b, c};
        sort(arr, arr+3);
        int min_1st = arr[0], min_2nd = arr[1];
        cout << ((min_1st*(x-1)) + (min_2nd));
        // for(int i : arr ) cout << i << ' ';
        cout << "\n";

    }
    return 0;
}
