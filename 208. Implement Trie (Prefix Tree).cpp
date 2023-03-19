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

class Trie {
public:
        Trie* arr[26];
        bool we = false;
    Trie() {
        for(int i = 0; i < 26; ++i) this->arr[i] = NULL;
        this->we = false;
        
    }
    
    void insert(string word) {
        int n = word.size();
        Trie* temp = this;

        for(int i = 0; i < n; ++i){
            if(temp->arr[word[i]-'a'] == NULL){
                temp->arr[word[i]-'a'] = new Trie();
            }
            temp = temp->arr[word[i]-'a'];
        }
        temp->we = true;
    }
    
    bool search(string word) {
        int n = word.size();
        Trie* temp = this;

        for(int i = 0; i < n; ++i){
            if(temp->arr[word[i]-'a'] == NULL) return false;
            temp = temp->arr[word[i]-'a'];
        }
        return temp->we;
        
    }
    
    bool startsWith(string word) {
        int n = word.size();
        Trie* temp = this;

        for(int i = 0; i < n; ++i){
            if(temp->arr[word[i]-'a'] == NULL) return false;
            temp = temp->arr[word[i]-'a'];
        }
        return true;
        
    }
};


void solve(){
    Trie* obj = new Trie();
    string word = "apple";
    obj->insert(word);
    bool param_2 = obj->search(word);
    // bool param_3 = obj->startsWith(prefix);

    bug(param_2);
    
}

int32_t main()
{

    ITAACHI UCHIHA

    int _ = 1;
    //cin >> _;
    while (_--) solve();
    return 0;
}