#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void getPermutation(ll n)
{
    if (n == 1)
    {
        cout << 1;
        return;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION";
        return;
    }
    if ((n % 2) == 1)
    {
        for (int i = n - 1; i > 1; i -= 2)
        {
            cout << i << " ";
        }
        for (int i = n; i >= 1; i -= 2)
        {
            cout << i << " ";
        }
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (int i = 1; i < n; i += 2)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    getPermutation(n);
    return 0;
}