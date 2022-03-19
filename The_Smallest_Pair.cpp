#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int getMin(int arr[], int n)
{
    int mn = INT_MAX, ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
            ind = i;
        }
    }
    arr[ind] = INT_MAX;
    return mn;
}

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
        int temp = n;
        while (temp--)
            cin >> arr[temp];
        int first = getMin(arr, n);
        int second = getMin(arr, n);
        cout << first + second << "\n";
    }
    return 0;
}
