#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1e5 + 10;

vector<int> graph[N];
bool vis[N];

int get_restaurants(int &cats_ct, bool cats[], int vertex, int &res_ct, int min_cats)
{
    if (vis[vertex])
    {
        cats_ct -= cats[vertex]; 
        return 0;
    }
    vis[vertex] = true;
    cats_ct += cats[vertex];
    if (cats_ct <= min_cats)
        res_ct++;
    else return 0;
    for(int i : graph[vertex]) get_restaurants(cats_ct, cats, i, res_ct, min_cats);

    return res_ct;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        int n, min_cats;
        cin >> n >> min_cats;
        bool cats[n + 1];
        cats[0] = 0;
        for (int i = 1; i <= n; i++)
            cin >> cats[i];
        // for (int i = 1; i <= n; i++)
        // cout << cats[i] << " ";

        for (int i = 0; i < n - 1; i++)
        {
            int v1, v2;
            cin >> v1 >> v2;
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
        int cats_ct = 0, res_ct = 0;
        cout << get_restaurants(cats_ct, cats, 1, res_ct, min_cats);
    }
    return 0;
}
