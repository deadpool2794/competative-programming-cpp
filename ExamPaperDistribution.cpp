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
const int N = 2560;
ll fact[N];
ll req[N];

ll calFact(ll n)
{
    if (fact[n] != 0)
        return fact[n];
    return fact[n] = n * calFact(n - 1);
}

bool isConsiderable(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        if (i + 1 == arr[i])
            return true;
    return false;
}

ll solve(ll n){
    // prints(-1);
    if (n == 1) return 1;
    if (n == 0) return 0;
    if(req[n] != 0) return req[n];
    return req[n] = (n-1) * (solve(n-1) + solve(n-2));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        req[1] = 1;
        // ll n;
        // cin >> n;
        // int arr[n];
        // for (int i = 0; i < n; i++)
        //     arr[i] = i + 1;
        // // for(int i = 0; i < n; i++) prints(arr[i]);
        // int ct = 0;
        // calFact(n);
        // do
        // {
        //     if (isConsiderable(arr, n))
        //         ct++;
        // } while (next_permutation(arr, arr + n));
        // prints(fact[n]);
        // prints(ct);
        ll n;
        cin >> n;
        prints(solve(n));
    }
    return 0;
}
