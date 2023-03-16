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
            cin >> arr[i];
        vector<int> v_odd, v_even;
        for (int i : arr)
            if (i & 1)
                v_odd.push_back(i);
            else
                v_even.push_back(i);
        if (((v_odd.size() % 2) == 0) && (v_odd.size() > 1))
        {
            for (int i : v_odd)
                cout << i << " ";
            for (int i : v_even)
                cout << i << " ";
        }
        else
        {
            if ((v_even.size() >= 1) && v_odd.size() > 1)
            {
                for (int i = 0; i < v_odd.size() - 1; i++)
                    cout << v_odd[i] << " ";
                cout << v_even[0] << " " << v_odd[v_odd.size() - 1] << " ";
                for (int i = 1; i < v_even.size(); i++)
                    cout << v_even[i] << ' ';
            }
            else
                cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
