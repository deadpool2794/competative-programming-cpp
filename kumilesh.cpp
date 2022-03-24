#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        long long k = i * i * (i * i - 1) / 2;
        long long r = 4 * (i - 1) * (i - 2);
        long long b = k - r;
        cout << b << "\n";
    }
}