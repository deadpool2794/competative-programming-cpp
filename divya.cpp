#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ITAACHI  ios::sync_with_stdio(0);cin.tie(0);
#define UCHIHA cout << boolalpha;
#define println(x) cout << (x) << "\n"
#define REP(i,start,end) for(int i = start; i < end; ++i)
void no(){println("NO");}
void yes(){println("YES");}

int n;

bool f(int ind, int sm, int* arr){
    if(ind == n) return sm == 0;
    if(sm == 0) return true;
    bool left = f(ind+1, sm, arr);
    bool right = false;
    if(sm >= arr[ind]) right = f(ind+1, sm-arr[ind], arr);
    return left | right;
}

void solve(){
    int sm = 0; cin >> n;
    int arr[n]; REP(x, 0, n) cin >> arr[x], sm += arr[x];
    if(sm&1) {
        no();
        return;
    } 
    bool res = f(0,sm/2, arr);
    res ? yes() : no();
}

int32_t main()
{
    ITAACHI UCHIHA
    solve();
    return 0;
}