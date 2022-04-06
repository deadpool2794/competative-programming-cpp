#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<int>> allArrays;

void dfs(vector<vector<int>> &mat, int i, int j, vector<int> &pos)
{
    if (i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size())
    {
        allArrays.push_back(pos);
        return;
    }
    if (mat[i][j] > pos[pos.size() - 1])
        pos.push_back(mat[i][j]);
    else
    {
        allArrays.push_back(pos);
        return;
    }
    dfs(mat, i - 1, j, pos);
    dfs(mat, i, j - 1, pos);
    dfs(mat, i + 1, j, pos);
    dfs(mat, i, j + 1, pos);
    pos.resize(pos.size() - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        // cout << m << " " << n;
        vector<vector<int>> mat;

        for (int i = 0; i < m; i++)
        {
            vector<int> row;
            for (int j = 0; j < n; j++)
            {
                int el;
                cin >> el;
                row.push_back(el);
            }
            mat.push_back(row);
        }
        // for (auto i : mat)
        // {
        //     for (auto j : i)
        //         cout << j << " ";
        //     cout << "\n";
        // }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                vector<int> pos;
                pos.push_back(-1);
                dfs(mat, i, j, pos);
            }
        }
        // for (auto i : allArrays)
        // {
        //     for (auto j : i)
        //         cout << j << " ";
        //     cout << "\n";
        // }
        int mx = 0;
        for (auto i : allArrays)
        {
            int n = i.size();
            mx = max(n, mx);
        }

        cout << mx - 1;
    }

    return 0;
}

// 0 1 2 3 4 5 6 7 8 9
// 19 18 17 16 15 14 13 12 11 10 
// 20 21 22 23 24 25 26 27 28 29 
// 39 38 37 36 35 34 33 32 31 30 
// 40 41 42 43 44 45 46 47 48 49 
// 59 58 57 56 55 54 53 52 51 50 
// 60 61 62 63 64 65 66 67 68 69 
// 79 78 77 76 75 74 73 72 71 70 
// 80 81 82 83 84 85 86 87 88 89 
// 99 98 97 96 95 94 93 92 91 90 
// 100 101 102 103 104 105 106 107 108 109 
// 119 118 117 116 115 114 113 112 111 110 
// 120 121 122 123 124 125 126 127 128 129 
// 139 138 137 136 135 134 133 132 131 130 
// 0 0 0 0 0 0 0 0 0 0
