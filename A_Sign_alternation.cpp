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

struct item{
    // elements in node
    int p;
};

struct SegmentTree{
    int sz;
    vector<item> tree;
int left(int x){
    return 2*x+1;
    }

int right(int x){
    return 2*x+2;
    }

    item N = {0}; // Neutral Element;
    
    item node(int val){
        // structure of a node in tree
        return {val};
    }

    item combineSegments(item a, item b){
        // criteria to combine segments 
        return {a.p+b.p};
    }

    SegmentTree(int* arr, int n){
        sz = 1;
        while(sz < n) sz <<= 1;
        tree.resize(2*sz-1);
        build(0, 0, sz, arr, n);
    }

    void build(int x, int lx, int rx, int* arr, int n){
        if(rx-lx == 1){
            if(lx < n) tree[x] = node(arr[lx]); /*-----------*/
            return;
        }
        int m = (lx + rx)/2;

        build(2*x+1, lx, m, arr, n);
        build(2*x+2, m, rx, arr, n);

        tree[x] = combineSegments(tree[2*x+1] , tree[2*x+2]);
    }

    void set(int x, int lx, int rx, int val, int ind){
        if(rx-lx == 1){
            tree[x] = node(val); /*-----------*/
            return;
        }
        int m = (lx + rx)/2;
        if(ind < m) set(2*x+1, lx, m, val, ind);
        else set(2*x+2, m, rx, val, ind);
        
        tree[x] = combineSegments(tree[2*x+1] , tree[2*x+2]);
    }

    void set(int val, int ind){
        set(0, 0, sz, val, ind);
    }

    item calc(int x, int lx, int rx, int l, int r){
        if(lx >= r || rx <= l) return N;
        if(lx >= l && rx <= r) return tree[x];
        int m = (lx+rx)/2;
        item left = calc(2*x+1, lx, m, l, r), right = calc(2*x+2, m, rx, l, r);
        return  combineSegments(left , right);
    }

    item calc(int l, int r){
        return calc(0, 0, sz, l, r);
    }

    bool lineBreak(int i){
        return __builtin_popcountll(i+2) == 1;
    }

    void print(){
        REP(i, 0, 2*sz-1) cerr << tree[i].p << " \n"[lineBreak(i)];
    }

};

void solve(){
    int n; cin >> n;
    int odd[n]{0}, even[n]{0};
    int arr[n]; REP(i, 0, n) cin >> arr[i], i&1 ? odd[i]= arr[i] : even[i] = arr[i];

    SegmentTree oddst(odd, n), evenst(even, n); 
    // oddst.print();
    // evenst.print();

    int m; cin >> m;
    while(m--){
        int ch, a, b; cin >> ch >> a >> b;
        if(!ch){
            if(!(a&1)) oddst.set(b, a-1);
            else evenst.set(b, a-1);
            // oddst.print();
            // evenst.print();
        }else{
            int s1, s2;
            s1 = oddst.calc(a-1, b).p;
            s2 = evenst.calc(a-1, b).p;
            if(!(a&1)) println(s1-s2);
            else println(s2-s1);
        }
    }
    
}

int32_t main()
{

    ITAACHI UCHIHA

    int _ = 1;
    //cin >> _;
    while (_--) solve();
    return 0;
}