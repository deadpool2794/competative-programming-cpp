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
    // cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        for (int fghij = 1234; fghij <= 98765 / N; fghij++)
        {
            int abcde = fghij * N;           // this way, abcde and fghij are at most 5 digits
            int tmp = abcde, used = (fghij < 10000); // if digit f=0, then we have to flag it
            while (tmp)
            {
                used |= 1 << (tmp % 10);
                tmp /= 10;
            }
            tmp = fghij;
            while (tmp)
            {
                used |= 1 << (tmp % 10);
                tmp /= 10;
            }
            if (used == (1 << 10) - 1)
            { // if all digits are used, print it
                prints(abcde);
                prints(fghij);
            }
        }
        println("");
    }
    return 0;
}
