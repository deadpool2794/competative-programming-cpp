#include <bits/stdc++.h> 

using namespace std;


void permutations(int arr[], vector<int> &ds, vector<vector<int>> &ans, bool freq[])
{
    if (ds.size() == 3)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        if (!freq[i])
        {
            freq[i] = true;
            ds.push_back(arr[i]);
            permutations(arr, ds, ans, freq);
            ds.pop_back();
            freq[i] = false;
        }
    }
}

int main()
{
    
    int arr[3] = {3, 1, 2};
    vector<int> ds;
    vector<vector<int>> ans;
    
    bool freq[3];
    

    permutations(arr, ds, ans, freq);
    for (auto i = 0; i < ans.size(); i++)
    {
        for (auto j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}