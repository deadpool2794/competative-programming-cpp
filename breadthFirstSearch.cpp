#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1e5+10;
vector<int> g[N];
queue<int> bfsQ;
bool vis[N];
void bfs(int vertex){
    bfsQ.push(vertex);
    vis[vertex] = true;
    while(bfsQ.size()){
        cout << bfsQ.front() << " ";
        for(auto i : g[bfsQ.front()]){
            if(vis[i]) continue;
            bfsQ.push(i);
            vis[i] =true;
        }
        bfsQ.pop();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    //cin >> t;
    while(t--){
        int nodes, edges;
        cin >> nodes >> edges;
        for (int i = 0; i < edges; i++)
        {
            int es, ed;
            cin >> es >> ed;
            g[es].push_back(ed);
            g[ed].push_back(es);
        }
        bfs(1);
        
    }
    return 0;
}
