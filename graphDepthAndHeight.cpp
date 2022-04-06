// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// void dfs(vector<int> graph[], int depth[], int root, int par, bool vis[], int &sum)
// {

//     if (vis[root])
//         return;
//     vis[root] = true;
//     sum += par;
//     depth[root] = depth[par] + 1;
//     for (int i : graph[root])
//     {
//         dfs(graph, depth, i, root, vis, sum);
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     ll t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         int nodes, edges;
//         cin >> nodes >> edges;
//         nodes++;
//         vector<int> graph[nodes];

//         for (int i = 0; i < edges; i++)
//         {
//             int es, ed;
//             cin >> es >> ed;
//             graph[es].push_back(ed);
//             graph[ed].push_back(es);
//         }
//         int depth[nodes];
//         bool vis[nodes];
//         for (int i = 1; i < nodes; i++)
//         {
//             vis[i] = false;
//         }
//         depth[0] = -1;
//         int sum = 0;
//         dfs(graph, depth, 1, 0, vis, sum);

//         for (int i = 1; i < nodes; i++)
//         {
//             cout << depth[i] << " ";
//         }
//         cout << "\n"
//              << sum;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll dfs(vector<int> graph[], int child, int par = 0)
// {
//     int sum = child;
//     for(int i : graph[child]){
//         sum += dfs(graph, i, child);

//     }
//     return sum;
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     ll t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         int nodes, edges;
//         cin >> nodes >> edges;
//         nodes++;
//         vector<int> graph[nodes];

//         for (int i = 0; i < edges; i++)
//         {
//             int es, ed;
//             cin >> es >> ed;
//             graph[es].push_back(ed);
//             graph[ed].push_back(es);
//         }
//         int subTreeSum[nodes];
//         for (int i = 1; i < nodes; i++)
//         {
//             subTreeSum[i] = dfs(graph, i);
//         }
//         for (int i = 1; i < nodes; i++)
//         {
//             cout << subTreeSum[i] << " ";
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void dfs(vector<int> graph[], int child, int par, int depth[])
{
    depth[child] = depth[par] + 1;
    for (int i : graph[child])
    {
        if (i == par)
            continue;
        dfs(graph, i, child, depth);
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
        int nodes, edges;
        cin >> nodes >> edges;
        nodes++;
        vector<int> graph[nodes];

        for (int i = 0; i < edges; i++)
        {
            int es, ed;
            cin >> es >> ed;
            graph[es].push_back(ed);
            graph[ed].push_back(es);
        }
        int depth[nodes];
        depth[0] = -1;
        dfs(graph, 1, 0, depth);
        int mx = 0;
        int endIndex = 0;
        for (int i = 0; i < nodes; i++)
        {
            if (mx < depth[i])
            {
                endIndex = i;
                mx = depth[i];
            }
        }
        // cout << endIndex << " " << mx;
        dfs(graph,endIndex, 0, depth );
        mx = 0;
        endIndex = 0;
        for (int i = 0; i < nodes; i++)
        {
            if (mx < depth[i])
            {
                endIndex = i;
                mx = depth[i];
            }
        }
        cout << endIndex << " " << mx;
    }
    return 0;
}
