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

    int t = 1;
    int num = 0;
    cin >> t;
    cout << fixed << setprecision(3);
    while (t--)
    {
        num++;
        double d, v, u;
        cin >> d >> v >> u;
        double path1_time = d / u;
        double path2_time = d / sqrt(((u * u) - (v * v)));
        if (v >= u || path1_time == path2_time) cout << "Case " << num << ": can't determine\n";
        else cout << "Case " << num << ": " << (path2_time-path1_time) << "\n";
    }
    return 0;
}
