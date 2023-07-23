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

const int N = 1e5+10;
int n, arr[N];

vvi allPerms;

void allPermutations(int ind, vector<int> &arr){
    // vvi A must be initialized globally
    if(ind == arr.size()-1){
        allPerms.pb(arr);
    }

    REP(i, ind, arr.size()){
        swap(arr[i], arr[ind]);
        allPermutations(ind+1, arr);
        swap(arr[i], arr[ind]);
        
    }
}


void solve(){
    cin >> n;
    REP(x, 0, n) cin >> arr[x], arr[x] %= 3;
    
    int ans = INT_MAX, cur = 0;
    for(auto perm : allPerms){
        cur = 0;
        REP(i, 0, n){
            if(perm[i%3] != arr[i]) {
                if(arr[i] < perm[i%3]) cur += perm[i%3]-arr[i];
                else{
                    if(arr[i] == 2 && perm[i%3] == 1) cur += 2;
                    else if(arr[i] == 2 && perm[i%3] == 0) cur++;
                    else cur += 2;
                }
            }
        }
        ans =  min(cur, ans);

    }
    println(ans);

    
}

int32_t main()
{

    ITAACHI UCHIHA
    vi perm = {0, 1, 2};
    allPermutations(0, perm);
    allPerms.pb({0, 0, 0});
    allPerms.pb({1, 1, 1});
    allPerms.pb({2, 2, 2});
    int _ = 1;
    cin >> _;
    while (_--) solve();
    return 0;
}