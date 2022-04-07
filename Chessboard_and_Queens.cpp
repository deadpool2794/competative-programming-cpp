#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

char board[8][8];
int ans = 0;

bool valid(int i, int j)
{
    return (i >= 0 && i < 8 && j >= 0 && j < 8);
}

bool isPossible(int row, int column)
{
    for (int i = 0; i < 8; i++)
    {
        if (board[row][i] == 'C')
            return false;
        if (board[i][column] == 'C')
            return false;
    }
    int row_c = row;
    int col_c = column;

    while (valid(row_c, col_c))
    {
        if (board[row_c][col_c] == 'C')
            return false;
        row_c--;
        col_c--;
    }

    row_c = row;
    col_c = column;
    while (valid(row_c, col_c))
    {
        if (board[row_c][col_c] == 'C')
            return false;
        row_c++;
        col_c++;
    }

    row_c = row;
    col_c = column;
    while (valid(row_c, col_c))
    {
        if (board[row_c][col_c] == 'C')
            return false;
        row_c--;
        col_c++;
    }

    row_c = row;
    col_c = column;
    while (valid(row_c, col_c))
    {
        if (board[row_c][col_c] == 'C')
            return false;
        row_c++;
        col_c--;
    }

    return true;
}

bool countWays(int row, int column, int ct)
{
   
    if (ct == 8)
        ans++;
    if (row > 7)
        return false;
    

    for (int i = 0; i < 8; i++)
    {
        if (isPossible(row, i) && board[row][i] != '*')
        {
            board[row][i] = 'C';
            ct++;
            if (!countWays(row + 1, 0, ct))
            {
                ct--;
                board[row][i] = '.';
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                char cell;
                cin >> cell;
                board[i][j] = cell;
            }
        }
        // for (int i = 0; i < 8; i++)
        // {
        //     for (int j = 0; j < 8; j++)
        //     {
        //         cout << board[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
    }
    countWays(0, 0, 0);
    cout << ans;

    // cout << (isPossible(4, 0) ? "true": "false");
    return 0;
}
