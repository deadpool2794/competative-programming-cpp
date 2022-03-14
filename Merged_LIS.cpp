#include <bits/stdc++.h>
using namespace std;

int getLis(int arr[], int n)
{
    int lis[n];
    lis[0] = 1;

    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] >= arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
    int length = *max_element(lis, lis + n);
    return length;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
        }

        for (int i = 0; i<m; i++){
            cin>>b[i];
        }
        
        int count_a = getLis(a, n), count_b= getLis(b, m);
        cout<<count_a+count_b<<"\n";


    }

    return 0;
}
