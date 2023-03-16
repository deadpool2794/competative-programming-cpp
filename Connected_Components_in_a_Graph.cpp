#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e7 + 10;
bool vis[N];
vector<int> graph[N];

void dfs(int i){
    if(vis[i]) return;
    vis[i] = true;
    for(auto sub: graph[i]){
        dfs(sub);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        int n, e;
        cin >> n >> e;
        for (int i = 0; i < e; i++)
        {
            int v1, v2;
            cin >> v1 >> v2;
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
        int ct = 0;
        for (int i = 1; i < n + 1; i++)
        {
            if(!vis[i]){
                ct++;
                dfs(i);
            } 
        }
        cout << ct;
    }
    return 0;
}
