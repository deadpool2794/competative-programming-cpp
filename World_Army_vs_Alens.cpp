#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        int hrs, mins, b_hrs, b_mins;
        cin >> hrs >> mins >> b_hrs >> b_mins;
        int t_hrs = hrs + b_hrs, t_mins = mins + b_mins;
        if (t_mins >= 60)
        {
            t_mins %= 60;
            t_hrs++;
        }
        t_hrs %= 24;
        if (t_hrs < 10)
            cout << "0";
        cout << t_hrs << " ";
        if (t_mins < 10)
            cout << "0";
        cout << t_mins;
    }
    return 0;
}
