#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<int>> vvi;

void printVec(vvi &vn){
    for (auto &i : vn)
    {
        for (int j = 0; j < i.size(); j++)
        {
            cout << i[j];
        }
        cout << "\n";
    }
}

vvi grayCode(int n)
{
    if (n == 1)
    {
        vvi v;
        vector<int> a = {0}, b = {1};
        v.push_back(a);
        v.push_back(b);
        return v;
    }
    vvi prev_gcs = grayCode(n - 1);
    vvi new_gcs;
    for (auto &i: prev_gcs)
    {
        i.insert(i.begin(), 0);
        new_gcs.push_back(i);
    }
    for (int i = prev_gcs.size() - 1; i >= 0; i--)
    {
        prev_gcs[i][0] = 1;
        new_gcs.push_back(prev_gcs[i]);
    }
    return new_gcs;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    vvi vn = grayCode(n);
    printVec(vn);
}