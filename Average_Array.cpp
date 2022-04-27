// Edhi okasaari Moyya anamma
// Velli aadukomma
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define print(x) cout << x
#define prints(x) cout << x << " "
#define ALL(x) x.begin(), x.end()
#define println(x) cout << x << "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n & 1)
        {
            n = n / 2;
            for (int i = x - n; i <= x + n; i++)
            {
                prints(i);
            }
            println("");
        }
        else
        {
            n = n / 2;
            for (int i = x - n; i <= x + n; i++)
            {
                if (x != i)
                    prints(i);
            }
            println("");
        }
    }
    return 0;
}
