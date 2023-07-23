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
#define UCHIHA cout << boolalpha;
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
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
int gcd(int a, int b){return (b == 0) ? a : gcd(b, a%b); }
int lcm(int a, int b){return a * (b/gcd(a,b)); }

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cerr << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr (names + 1, ',');
    cerr.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
} 

void solve(){

    // int n, ans = inf; cin >> n;
    // int arr[2*n]; REP(x, 0, 2*n) cin >> arr[x];
    // if(n == 1){
    //     println(abs(arr[0]-arr[1]));
    //     return;
    // }

    // if(n == 2){
    //     vvi poss = {{-1, -1, -1,  2},{-1, -1,  2, -1},{-1,  2, -1, -1},{ 0,  0,  0,  0},{ 2, -1, -1, -1},{ 2,  2,  2,  2}};
    //     for(auto vec : poss){
    //         int cur = 0;
    //         REP(i, 0, 4) cur += abs(vec[i]-arr[i]);
    //         ans = min(ans, cur);
    //     }

    //     println(ans);
    //     return;
    // }
    // ans = 0;
    // REP(i, 0, 2*n) ans += abs(arr[i]);
    // println(ans);
    REP(a, -3, 4)
    REP(b, -3, 4)
    REP(c, -3, 4)
    REP(d, -3, 4)
    REP(e, -3, 4)
    REP(f, -3, 4)
    REP(g, -3, 4)
    REP(h, -3, 4){
        if(a*b*c*d == e+f+g+h
            && a*b*c*e == d+f+g+h
            && a*b*c*f == d+e+g+h
            && a*b*c*g == d+e+f+h
            && a*b*c*h == d+e+f+g
            && a*b*d*e == c+f+g+h
            && a*b*d*f == c+e+g+h
            && a*b*d*g == c+e+f+h
            && a*b*d*h == c+e+f+g
            && a*b*e*f == c+d+g+h
            && a*b*e*g == c+d+f+h
            && a*b*e*h == c+d+f+g
            && a*b*f*g == c+d+e+h
            && a*b*f*h == c+d+e+g
            && a*b*g*h == c+d+e+f
            && a*c*d*e == b+f+g+h
            && a*c*d*f == b+e+g+h
            && a*c*d*g == b+e+f+h
            && a*c*d*h == b+e+f+g
            && a*c*e*f == b+d+g+h
            && a*c*e*g == b+d+f+h
            && a*c*e*h == b+d+f+g
            && a*c*f*g == b+d+e+h
            && a*c*f*h == b+d+e+g
            && a*c*g*h == b+d+e+f
            && a*d*e*f == b+c+g+h
            && a*d*e*g == b+c+f+h
            && a*d*e*h == b+c+f+g
            && a*d*f*g == b+c+e+h
            && a*d*f*h == b+c+e+g
            && a*d*g*h == b+c+e+f
            && a*e*f*g == b+c+d+h
            && a*e*f*h == b+c+d+g
            && a*e*g*h == b+c+d+f
            && a*f*g*h == b+c+d+e
            && b*c*d*e == a+f+g+h
            && b*c*d*f == a+e+g+h
            && b*c*d*g == a+e+f+h
            && b*c*d*h == a+e+f+g
            && b*c*e*f == a+d+g+h
            && b*c*e*g == a+d+f+h
            && b*c*e*h == a+d+f+g
            && b*c*f*g == a+d+e+h
            && b*c*f*h == a+d+e+g
            && b*c*g*h == a+d+e+f
            && b*d*e*f == a+c+g+h
            && b*d*e*g == a+c+f+h
            && b*d*e*h == a+c+f+g
            && b*d*f*g == a+c+e+h
            && b*d*f*h == a+c+e+g
            && b*d*g*h == a+c+e+f
            && b*e*f*g == a+c+d+h
            && b*e*f*h == a+c+d+g
            && b*e*g*h == a+c+d+f
            && b*f*g*h == a+c+d+e
            && c*d*e*f == a+b+g+h
            && c*d*e*g == a+b+f+h
            && c*d*e*h == a+b+f+g
            && c*d*f*g == a+b+e+h
            && c*d*f*h == a+b+e+g
            && c*d*g*h == a+b+e+f
            && c*e*f*g == a+b+d+h
            && c*e*f*h == a+b+d+g
            && c*e*g*h == a+b+d+f
            && c*f*g*h == a+b+d+e
            && d*e*f*g == a+b+c+h
            && d*e*f*h == a+b+c+g
            && d*e*g*h == a+b+c+f
            && d*f*g*h == a+b+c+e
            && e*f*g*h == a+b+c+d){
                prints(a);
                prints(b);
                prints(c);
                prints(d);
                prints(e);
                prints(f);
                prints(g);
                println(h);
            }
    }
    
}

int32_t main(){

    ITAACHI UCHIHA

    int _ = 1;
    // cin >> _;
    while (_--) solve();
    return 0;
}

