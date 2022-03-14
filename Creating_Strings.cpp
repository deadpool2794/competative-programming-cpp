#include <bits/stdc++.h>

using namespace std;
vector<string> vs;
typedef long long ll;
vector<string> ans;

void generate(string &s, int idx)
{
    if (idx == s.size())
    {
        ans.push_back(s);
        return;
    }

    for ( int i = 0; i < s.size(); i++)
    {
        swap(s[i], s[idx]);
        generate(s, idx + 1);
        swap(s[i], s[idx]);
    }
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    generate(s, 0);
    sort(ans.begin(), ans.end());
    vector<string> req;
    for(int i = 0; i< ans.size()-1; i++){
        if (ans[i] != ans[i-1]){
            req.push_back(ans[i]);
        }
    }
    cout<<req.size()<<"\n";
    

    for (auto &i : req)
    {
        cout << i << "\n";
    }

    return 0;
}