#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int getNoOfWays(int n){
    if(n <= 1) return 1;
    if(n == 2) return 2;
    return getNoOfWays(n-1) + getNoOfWays(n-2);

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << getNoOfWays(n) << "\n";
    }
    return 0;
}
