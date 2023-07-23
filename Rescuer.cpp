#include <bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

#define int long long
#define F first
#define S second
#define pb push_back
#define pf push_front
#define bug(...) __f (#__VA_ARGS__, __VA_ARGS__) 
#define ITAACHI  ios::sync_with_stdio(0);cin.tie(0);
#define UCHIHA cout << boolalpha << setprecision(5) << fixed;
#define prints(x) cout << (x) << " "
#define ALL(x) x.begin(), x.end()
#define println(x) cout << (x) << "\n"
#define REP(i,start,end) for(int i = start; i < end; ++i)

typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<char> vc;
typedef vector<vi> vvi;

const int inf = 1LL<<62;
const int M1 = 1000000007;
const int M2 = 998244353;
const ld EPS = 1e-6;

mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

void __print(int x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '"' << x << '"';}
void __print(const string &x) {cerr << '"' << x << '"';}
void __print(bool x) {cerr << (x ? "true" : "false");}


template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << '}';}
void _print() {cerr << "]\n";}
void _print(int* a, int n){REP(x, 0, n) cerr << a[x] << " \n"[x==n-1];}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
void no(){println("NO");}
void yes(){println("YES");}
int gcd(int a, int b){return (b == 0) ? a : gcd(b, a%b); }
int lcm(int a, int b){return a * (b/gcd(a,b)); }
int sum(vi &a){int sm = 0;for(int i : a) sm += i;return sm;}
ld average(vi &a){ld avg = sum(a);return avg/a.size();}
int sum(int* a, int n){int sm = 0;REP(i, 0, n) sm += a[i];return sm;}
ld average(int* a, int n){ld avg = sum(a, n);return avg/n;}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cerr << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr (names + 1, ',');
    cerr.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
} 

double x1, y_, x2, y2, v1, v2;

// double sqrt(double n){
//     double l = 1, r = n;
//     while(r-l > EPS){
//         double m = (l+r)/2;
//         if(m*m > n)r = m;
//         else l = m;
//     }
//     return l;
// }

double f(double m){
    double d1 = sqrt(((x1-m)*(x1-m)) + (y_*y_)), d2 = sqrt(((x2-m)*(x2-m)) + (y2*y2));
    double t = d1/v1;
    t += d2/v2;
    return t;
}



void solve(){

    cin >> x1 >> y_ >> x2 >> y2 >> v1 >> v2;
    double l  = min(x1, x2), r = max(x1, x2);

    

    while(r-l > EPS){
        double m1 = l+(r-l)/3, m2 = r-(r-l)/3;
        double fm1 = f(m1), fm2 =f(m2);
       
        if(fm1 > fm2) l = m1;
        else r = m2;
    }

    println(f(l));

    
}

int32_t main()
{

    ITAACHI UCHIHA

    int _ = 1;
    cin >> _;
    while (_--) solve();
    return 0;
}