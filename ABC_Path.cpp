#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int max_length(vector<vector<char>> &arr, int i, int j, int ct, int chr, int n, int m)
{
    if (i >= m || i < 0 || j >= n || j < 0)
        return 0;
    if ((int)arr[i][j] != chr)
        return 0;
    vector<int> temp;
    temp.push_back(max_length(arr, i + 1, j, ct, chr + 1, n, m));
    temp.push_back(max_length(arr, i - 1, j, ct, chr + 1, n, m));
    temp.push_back(max_length(arr, i, j + 1, ct, chr + 1, n, m));
    temp.push_back(max_length(arr, i, j - 1, ct, chr + 1, n, m));
    temp.push_back(max_length(arr, i + 1, j + 1, ct, chr + 1, n, m));
    temp.push_back(max_length(arr, i + 1, j - 1, ct, chr + 1, n, m));
    temp.push_back(max_length(arr, i - 1, j - 1, ct, chr + 1, n, m));
    temp.push_back(max_length(arr, i - 1, j + 1, ct, chr + 1, n, m));
    int mx = *max_element(temp.begin(), temp.end());

    return ct+mx;
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
        vector<vector<char>> arr;
        for (int i = 0; i < m; i++)
        {
            string row;
            cin >> row;
            vector<char> temp;
            for (int j = 0; j < n; j++)
            {
                temp.push_back(row[j]);
            }
            arr.push_back(temp);
        }
        int ct = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 'A')
                    ct = max(max_length(arr, i, j, 1, 65, n, m), ct);
            }
        }
        cout << ct;
    }
    return 0;
}
