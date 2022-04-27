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
string possibilities[6] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
int bins[3][3];

int getCount(string order)
{
    int ct = 0;
    if (order == "BCG")
    {
        ct += bins[1][0];
        ct += bins[2][0];
        ct += bins[0][2];
        ct += bins[2][2];
        ct += bins[0][1];
        ct += bins[1][1];
    }
    if (order == "BGC")
    {
        ct += bins[1][0];
        ct += bins[2][0];
        ct += bins[0][1];
        ct += bins[2][1];
        ct += bins[0][2];
        ct += bins[1][2];
    }
    if (order == "CBG")
    {
        ct += bins[1][2];
        ct += bins[2][2];
        ct += bins[0][0];
        ct += bins[2][0];
        ct += bins[0][1];
        ct += bins[1][1];
    }
    if (order == "CGB")
    {
        ct += bins[1][2];
        ct += bins[2][2];
        ct += bins[0][1];
        ct += bins[2][1];
        ct += bins[0][0];
        ct += bins[1][0];
    }
    if (order == "GBC")
    {
        ct += bins[1][1];
        ct += bins[2][1];
        ct += bins[0][0];
        ct += bins[2][0];
        ct += bins[0][2];
        ct += bins[1][2];
    }
    if (order == "GCB")
    {
        ct += bins[1][1];
        ct += bins[2][1];
        ct += bins[0][2];
        ct += bins[2][2];
        ct += bins[0][0];
        ct += bins[1][0];
    }
    return ct;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;

    while (cin >> bins[0][0] >> bins[0][1] >> bins[0][2] >> bins[1][0] >> bins[1][1] >> bins[1][2] >> bins[2][0] >> bins[2][1] >> bins[2][2])
    {
        string order;
        unsigned int ct = (1 << 31);
        for (int i = 0; i < 6; i++)
        {
            int curr_ct = getCount(possibilities[i]); 
            if (curr_ct < ct)
            {
                ct = curr_ct;
                order = possibilities[i];
            }
        }
        prints(order);
        println(ct);
    }

    return 0;
}
