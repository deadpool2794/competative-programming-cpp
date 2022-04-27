// Edhi okasaari Moyya anamma
// Velli aadukomma
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define print(x) cout << (x)
#define prints(x) cout << (x) << " "
#define ALL(x) x.begin(), x.end()
#define println(x) cout << (x) << "\n"


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
        if (n & 1)
        {
            if (n == 1 || n == 3)
            {
                println(-1);
            }
            else
            {
                prints("3 5 1 2 4 ");
                for (int i = n; i >= 6; i--)
                {
                    prints(i);
                }
                println("");
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                prints(n - i);
            }
            println("");
        }
    }
    return 0;
}
