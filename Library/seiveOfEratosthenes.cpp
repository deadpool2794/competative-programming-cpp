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

bitset <1000000> bs;

vi seiveOfEratosthenes(int num){
    // N must be known at compile time, hence 10^6
    // bitset <1000000> bs;
    bs.set();
    bs[0] = bs[1] = 0; 
    vi primes;
    for(ll i = 2; i <= num; ++i)
        if(bs[i]){
            for(ll j = i*i; j <= num; j += i) bs[j] = 0;
            primes.push_back(int(i));
        }
    return primes;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << boolalpha ;

    int t = 1;
    //cin >> t;
    while(t--){
        int num;
        cin >> num;
        vi primes = seiveOfEratosthenes(num);
        // for(int i : primes) println(i);
        println(bs[num]);
    }
    return 0;
}
