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

    cout << boolalpha ;

    int t = 1, ct = 1;
    cin >> t;
    while(t--){
        int a = 0, len;
        cin >> len;
        for(int i = 0; i < len; ++i){
            int speed;
            cin >> speed;
            a = max(a, speed);
        }
        cout << "Case " << ct++ << ": " << a << "\n";

    }
    return 0;
}
