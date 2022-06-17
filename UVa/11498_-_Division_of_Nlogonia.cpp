// Edhi okasaari Moyya anamma
// Velli Aadukomma
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while (true)
    {
        
        cin >> t;
        if(!t) break;
        int n, m;
        cin >> n >> m;
        while (t--)
        {
            int x, y;
            cin >> x >> y;
            x = n - x;
            y = m - y;
            if (x == 0 || y == 0)
                print("divisa");
            else if (x > 0 && y > 0)
                print("SO");
            else if (x > 0 && y < 0)
                print("NO");
            else if (x < 0 && y > 0)
                print("SE");
            else
                print("NE");
            println("");
        }
    }
    return 0;
}
