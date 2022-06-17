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
    // cin >> t;
    while (t--)
    {
        vi quirkNumbers;
        for (int n = 0; n <= 9999; ++n)
            quirkNumbers.push_back(n * n);
        int d;
        while (cin >> d)
        {
            for (int i = 0; i < quirkNumbers.size(); ++i)
            {
                if (quirkNumbers[i] >= (int)pow(10.0, d))
                    break;
                int U = quirkNumbers[i] / (int)pow(10.0, d / 2);
                int L = quirkNumbers[i] % (int)pow(10.0, d / 2);
                if ((U + L) * (U + L) == quirkNumbers[i])
                    cout << setw(d)
                         << setfill('0') 
                         << quirkNumbers[i]
                         << endl;
            }
        }
        return 0;
    }
    return 0;
}
