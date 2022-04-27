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
    // cin >> t;
    // string s;
    // cin >> s;
    // println(s);
    bool open = true;
    while (true)
    {
        string sen;
        getline(cin, sen);
        int len = sen.size();
        if (!len)
            break;
        for (int i = 0; i < len; i++)
        {
            if (sen[i] == '\"')
            {
                if (open)
                    print("``");
                else
                    print("\'\'");
                open = !open;
                continue;
            }
            print(sen[i]);
        }
        println("");
    }
    return 0;
}
