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
    cin >> t;
    while (t--)
    {
        int total, red, blue;
        cin >> total >> red >> blue;
        int partition = ceil((float(red) / ++blue));
        int partition_c = partition;
        while (total--)
        {
            if (partition_c && red)
            {
                partition_c--;
                red--;
                prints('R');
                continue;
            }
            if (!partition_c && blue){
                partition_c = partition;
                blue--;
                prints('B');
                continue;
            }
            while(blue > 1){
                prints('B');
                blue--;
            }
        }

        println("");
    }
    return 0;
}
