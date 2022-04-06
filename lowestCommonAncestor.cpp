#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1e5 + 10;

vector<int> graph[N];

int par[N];

void dfs(int child, int pr = -1)
{
    par[child] = pr;
    for (auto i : graph[child])
    {
        if (i == pr)
            continue;
        dfs(i, child);
    }
}

vector<int> getPath(int node)
{
    vector<int> path;
    while (node != -1)
    {
        path.push_back(node);
        node = par[node];
    }
    reverse(path.begin(), path.end());
    return path;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        int nodes, edges;
        cin >> nodes >> edges;
        for (int i = 1; i <= edges; i++)
        {
            int es, ed;
            cin >> es >> ed;
            graph[es].push_back(ed);
            graph[ed].push_back(es);
        }
        int node1, node2;
        cin >> node1 >> node2;
        dfs(1);
        vector<int> path1 = getPath(node1), path2 = getPath(node2);
        // for (int i : path2)
        //     cout << i << " ";
        // cout << "\n";
        // for (int i : path1)
        //     cout << i << " ";
        int minLength = min(path1.size(), path2.size()), lca;

        for (int i = 0; i < minLength; i++)
        {
            
            if (path1[i] != path2[i])break;
            lca = path1[i];
            
        }
        cout << lca;
    }
    return 0;
}
