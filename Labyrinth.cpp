#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<vector<char>> lmap;
vector<string> paths;

void findPath(int i, int j, string &path)
{
    cout << path << "\n";
    if (i < 0 || j < 0 || i >= lmap.size() || j >= lmap[0].size())
        return;
    if (lmap[i][j] == '#')
        return;
    if(lmap[i][j] == 'B'){
        paths.push_back(path);
        return;
    }
    path += 'D';
    findPath(i + 1, j, path);
    path.resize(path.size()-1);
    path += 'U';
    findPath(i - 1, j, path);
    path.resize(path.size()-1);
    path += 'L';
    findPath(i, j - 1, path);
    path.resize(path.size()-1);
    path += 'R';
    findPath(i, j + 1, path);
    path.resize(path.size()-1);
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
        for (int i = 0; i < m; i++)
        {
            string s;
            cin >> s;
            vector<char> row;
            for (char ch : s)
                row.push_back(ch);
            lmap.push_back(row);
        }
        string path = "";

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout << lmap[i][j] << " ";
                if (lmap[i][j] == 'A')
                {
                    findPath(i, j, path);
                    break;
                }
            }
        }
        return 0;
    }
}
