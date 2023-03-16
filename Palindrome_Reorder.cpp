#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int oddCount = 0;
    cin >> s;
    int n = s.size();
    map<char, int> m;
    for (char i : s)
    {
        m[i] += 1;
    }

    for (auto &i : m)
    {
        if (i.second % 2 == 1)
            oddCount += 1;
    }

    if (oddCount > 1)
    {
        cout << "NO SOLUTION\n";
    }
    else
    {
        char palindrome[n];
        int i = 0, j = n - 1;
        while (i < j)
        {
            for (auto &pair : m)
            {
                if (pair.second > 1)
                {
                    palindrome[i] = pair.first;
                    palindrome[j] = pair.first;
                    i++;
                    j--;
                    pair.second -= 2;
                }
            }
        }
        if (n % 2 == 1)
        {
            for (auto &pair : m)
            {
                if (pair.second == 1)
                {
                    palindrome[i] = pair.first;
                    break;
                }
            }
        }
        
        for (auto &i: palindrome){
            cout<<i;
        }
    }

    return 0;
}