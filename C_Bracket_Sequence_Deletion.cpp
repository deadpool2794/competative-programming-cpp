#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPalindrome(string &s)
{
    int sz = s.size();
    if (sz == 1)
        return false;
    int i = 0, j = sz - 1;
    if (s[i] == s[j])
        return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    // cout << isPalindrome(")((()");
    while (t--)
    {
        int n, ct = 0;
        cin >> n;
        string brackets, prev;
        cin >> brackets;
        prev = brackets[0];
        for (int i = 1; i < n; i++)
        {
            string curr = prev + brackets[i];
            if (curr == "((" || curr == "))" || curr == "()" || isPalindrome(curr))
            {
                ct++;
                prev = "";
            }
            else
                prev += brackets[i];
        }
        cout << ct << " " << prev.size() << "\n";
    }
    return 0;
}
