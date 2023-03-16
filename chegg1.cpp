

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int Ackermann(int m, int n)
{
    if (m == 0)
        return n + 1;
    if (m > 0 && n == 0)
        return Ackermann(m - 1, 1);
    return Ackermann(m - 1, Ackermann(m, n - 1));
}

int main()
{

    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int m, n;
    cin >> m >> n;
    cout << Ackermann(m, n);

    return 0;
}