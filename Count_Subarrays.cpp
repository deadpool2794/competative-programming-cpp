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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int prev = 0, ct = 0, i;

        for (i = 1; i < n; i++)
        {
            if (arr[i] < arr[i-1]){
                ct += ((i - prev + 0LL) * 1LL * (i - prev + 1 + 0LL)/ 2LL);
                prev = i;
            }
        }
        ct += ((i - prev ) * 1LL * (i - prev + 1 )/ 2);
        cout<<ct<<"\n";
        
    }
    return 0;
}