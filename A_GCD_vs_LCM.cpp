#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll num, a, b, c, d;
        cin >> num;
        int rem = num % 4;
        switch (rem)
        {
        case 0:
            a = num / 4;
            b = a;
            c = a;
            d = a;
            break;
        case 1:
            a = num / 4;
            b = 2 * a;
            c = a;
            d = 1;
            break;
        case 2:
            d = 1;
            c = 1;
            num -= 2;
            num /= 2;
            a = num - 1;
            b = num + 1;
            break;

        default:
            a = 2;
            b = num - 5;
            c = 2;
            d = 1;
            break;
        }
        cout << a << " " << b << " " << c << " " << d << "\n";
    }

    return 0;
}
