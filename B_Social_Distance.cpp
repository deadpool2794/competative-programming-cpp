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
        int people, chairs;
        cin >> people >> chairs;
        int emptyChairs[people];
        for (int i = 0; i < people; i++)
            cin >> emptyChairs[i];
        if (people >= chairs)
        {
            println("NO");
            continue;
        }
        
        sort(emptyChairs, emptyChairs + people);

        int auxArr[people];
        auxArr[0] = emptyChairs[0];
        for (int i = 1; i < people; i++)
            auxArr[i] = emptyChairs[i] - emptyChairs[i - 1];
        // for(int i : emptyChairs)prints(i);
        // println("");
        // for(int i : auxArr)prints(i);
        // println("");
        // println("");
        int ct = 0;
        for (int i = 0; i < people - 1; i++)
        {
            ct++;
            ct += emptyChairs[i] + auxArr[i + 1];
        }
        ct++;
        ct += emptyChairs[people - 1];
        // println(ct);
        if (ct <= chairs)
            println("YES");
        else
            println("NO");
    }
    return 0;
}
