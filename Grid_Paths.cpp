#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 88418;
vector<string> paths;
const int dim = 3;
bool vis[dim][dim];
string path;

bool valid(int i, int j)
{
    return (i >= 0 && i < dim && j >= 0 && j < dim);
}

// pair<int, int> moves[] ={{0,1},{0,-1},{1,0},{-1, 0}};
// void getPaths(int i, int j)
// {
//     // for (int i = 0; i < dim; i++)
//     // {
//     //     for (int j = 0; j < dim; j++)
//     //         cout << vis[i][j] << " ";
//     //     cout << "\n";
//     // }
//     // cout << path << "\n ";
//     if (!valid(i, j))
//         return;
//     if (i == (dim - 1) && j == 0 && path.size() == ((dim * dim) - 1))
//     {
//         cout << path << "\n";
//         paths.push_back(path);
//         return;
//     }
//      if (vis[i][j])
//         return; 
//     vis[i][j] = true;
//     path.push_back('L');
//     getPaths(i, j - 1);
//     path.pop_back();
//     path.push_back('R');
//     getPaths(i, j + 1);
//     path.pop_back();
//     path.push_back('D');
//     getPaths(i + 1, j);
//     path.pop_back();
//     path.push_back('U');
//     getPaths(i - 1, j - 1);
//     path.pop_back();
//     vis[i][j] = false;
// }

void getPaths(int n)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        getPaths(48);
        cout << paths.size();
    }
    return 0;
}
