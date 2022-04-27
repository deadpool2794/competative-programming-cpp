

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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        int k, n, g;
        cin >> k >> n >> g;
        int req = n, i = 0;
        for(;i<g;i++)
            req *= (n-i-1);
        for (int j = 0; j < (k-g-1); j++)
            req *=( n-i-1);
        print(req);
        
        
    }
    return 0;
}

