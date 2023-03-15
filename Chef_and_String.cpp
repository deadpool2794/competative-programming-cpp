#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ct = 0, curr = 0;
            for(int i = 1;i < s.size(); i++){
                int pairSum = s[i-1] + s[i];
                if (pairSum == 241){
                    i++;
                    ct++;
                }
            }
            cout<<ct<< endl;
    }
    return 0;
}