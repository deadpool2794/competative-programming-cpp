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

    int t = 1, caseNo = 1;
    cin >> t;
    while (t--)
    {
        int emp = 3;
        int arr[3];
        while (emp--)
            cin >> arr[emp];
        sort(arr, arr + 3);
        cout << "Case " << caseNo << ':' << " ";
        println(arr[1]);
        caseNo++;
    }
    return 0;
}
