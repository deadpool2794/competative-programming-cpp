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
#define ALL(x) x.begin(), x.end()
#define REP(i,start,end) for(int i = start; i < end; ++i)

template<typename T> void println(T x){cout << (x) << "\n";}
void println(){ return println("");}
template<typename T> void prints(T x){cout << (x) << " ";}

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

vi f(int a[], int b[], int n) {
    unordered_set<int> st;
    vi res;
    REP(i, 0, n)st.insert(a[i]);
    REP(i, 0, n) if (st.find(b[i]) != st.end()) res.pb(b[i]);
    return res;
}

void solve(){
    int n; cin >> n;
    int a[n]; REP(i, 0, n) cin >> a[i];
    int colA[n]; REP(i, 0, n) cin >> colA[i];
    int b[n]; REP(i, 0, n) cin >> b[i];
    int colB[n]; REP(i, 0, n) cin >> colB[i];
    map<int, multiset<int>> mpq;
    REP(i, 0, n) mpq[colA[i]].insert(a[i]);
    REP(i, 0, n) mpq[colB[i]].insert(b[i]);

    // for(auto ipq : mpq) _print(ipq.F, ipq.S);
    vi ce = f(colA, colB, n);
    sort(ALL(ce));
    int mn;
    REP(i, 0, n) {

        if(binary_search(ALL(ce), colA[i])){
            if(i == 0){
                if(a[i] > *mpq[colA[i]].begin()){
                    mn = *mpq[colA[i]].begin();
                    mpq[colA[i]].erase(mpq[colA[i]].begin());
                    mpq[colA[i]].insert(a[i]);
                    a[i] = mn;
                }
            }else{
                auto itr = mpq[colA[i]].lower_bound(a[i-1]);
                if(itr == mpq[colA[i]].end()) break;
                mn = *itr;
                mpq[colA[i]].erase(itr);
                mpq[colA[i]].insert(a[i]);
                a[i] = mn;
            }
        }
    }
    



    int i = 0;
    // _print(a, n);
    while(i < n-1 &&a[i] <= a[i+1]) i++;
    if(i == n-1)return yes();
    no();

}

int32_t main()
{

    ITAACHI UCHIHA

    int _ = 1;
    cin >> _;
    while (_--) solve();
    return 0;
}