#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void even(int a, int b)
{
    if (a + 2 <= b)
        cout << a << " " << a + 2;
    else
        cout << -1;
    cout << "\n";
}

void divisibleBy3(int a, int b)
{
    if (a + 3 <= b)
        cout << a << " " << a + 3;
    else
        cout << -1;
    cout << "\n";
}

void notDivisibleBy3(int a, int b)
{
    a++;
    even(a, b);
}

void odd(int a, int b)
{
    if (a % 3 == 0)
        divisibleBy3(a, b);
    else
        notDivisibleBy3(a, b);
}

void getMinPair(int a, int b)
{
    if (a & 1)
    {
        odd(a, b);
        return;
    }
    even(a, b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        // cout << a << " " << b << " ";
        getMinPair(a, b);
    }
    // for (int i = 1; i < 15; i ++)
    // {
    //     for (int j = i+1; j < 15; j++)
    //     {
    //         cout << i << " " << j << "\n";
    //     }
    // }

    return 0;
}
