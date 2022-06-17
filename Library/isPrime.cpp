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

bool isPrime(int num){
    if(num == 2) return true;
    if(num % 2 == 0 || num == 1) return false;
    for (int i = 3; i*i < num+1; i+=2){
        if(num%i == 0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << boolalpha ;

    // int t = 1;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
    //     println(isPrime(n));    
    // }
    for(int i = 1; i < 50; ++i){
        if(isPrime(i))println(i);    }
    return 0;
}
