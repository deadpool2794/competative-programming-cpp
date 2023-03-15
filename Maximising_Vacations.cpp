#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int getCount(string &s, int n, int x)
{
    int ct = 0, curr_ct = 0;
    cout<<s<<" ";
    for (int i = 0; i < n; i++){
        if (s[i] == '0'){
            curr_ct++;
            if (curr_ct == x) {
                curr_ct = 0;
                ct++;
            }
        }else{
            curr_ct = 0;
        }
    }
    cout<<ct<<" ";
    return ct;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                s[i] = '0';
                mx = max(mx, getCount(s, n, x));
                s[i] = '1';
            }
        }
        cout << mx<<"\n";
    }

    return 0;
}