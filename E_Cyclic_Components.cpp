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
const int N = 2e5+10;
int n, m, u, v;
bool vis[N];
vi adj[N];

bool dfs(int node, int par){
    vis[node] = 1;
    // bug(node);
    bool ans = 0;
    for(auto x : adj[node]){
        if(!vis[x]) ans |= dfs(x, node);
        else if(vis[x] && x != par) ans = 1;
    }
    return ans;
}

bool check(int node, vector<bool> &vis){
    if(vis[node]) return true;
    vis[node] = 1;
    if(adj[node].size() != 2) return false;
    
    return check(adj[node][0], vis) && check(adj[node][1], vis);
}

void solve(){
    cin >> n >> m;
    int cnt = 0;
    REP(x, 0, m){
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    REP(i, 0, n){
        bool cycle = 0;
        if(!vis[i]) {
            cycle = dfs(i, -1);
        }
        // bug(i, cycle);
        vector<bool> vis(n+1, 0);
        if(cycle) {
            // bug(i, cycle);
            if(check(i, vis)){
                cnt++;
            }
        }
    }
    
    println(cnt);

}

int32_t main()
{

    ITAACHI UCHIHA

    int _ = 1;
    //cin >> _;
    while (_--) solve();
    return 0;
}