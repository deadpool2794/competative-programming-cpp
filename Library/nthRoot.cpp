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
ll a, n;


double fun(double x){
    return pow(x, n)-a;
}

double fun_(double x){
    return n*(pow(x, (n-1)));
}


double newtonRaphton(int a, int n){
    double x_curr = 7, x_next;
    double limit = INT_MAX;
    while(limit > 1e-4){
        x_next = x_curr - (fun(x_curr)/ fun_(x_curr));
        limit = abs(x_next-x_curr);
        x_curr = x_next;
    }
    return x_next;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        cin >> a >> n;
       println(newtonRaphton(a,n));        
    }
    return 0;
}
