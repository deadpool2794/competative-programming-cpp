// Edhi okasaari Moyya anamma
// Velli aadukomma
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<char> vc;
#define M 1000000007
#define print(x) cout << (x)
#define prints(x) cout << (x) << " "
#define ALL(x) x.begin(), x.end()
#define println(x) cout << (x) << "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << boolalpha;

    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        for (int x = 1; x < 100; ++x)
            for (int y = 1; y < 100; ++y)
                for (int z = 1; z < 100; ++z)
                {
                    if ((x % y == a) && (y % z == b) && (z % x == c)){
                        prints(x);
                        prints(y);
                        prints(z);
                        println("");
                    }
                }
        println("");
    
    }
    return 0;
}
