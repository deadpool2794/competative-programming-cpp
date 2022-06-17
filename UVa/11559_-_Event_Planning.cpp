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
    // cin >> t;
    int n, b, h, w;

    while (cin >> n >> b >> h >> w)
    {
        int mn = M;
        for (int i = 0; i < h; i++)
        {
            int p;
            cin >> p;
            int beds_available;
            for (int i = 0; i < w; i++)
            {
                cin >> beds_available;
                if (beds_available >= n)
                    mn = min(mn, n * p);
            }
        }
        if (mn > b)
            println("stay home");
        else
            println(mn);
    }
    return 0;
}
