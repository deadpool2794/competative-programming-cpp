#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        /*
         ll p, q, r, s, a = -1, b = -1;
         bool isFound = false;
         cin >> p >> q >> r >> s;
         ll arr[4] = {p, q, r, s};
         // for (int i = 0; i < 4; i++)
         // cout << arr[i] << " ";
         for (int i = 0; i < 4; i++)
         {
             ll arr_[4] = {p, q, r, s};
             for (int j = 0; j < 4; j++)
             {
                 if (j != i)
                 {
                     int sum = arr[i] + arr[j];
                     if (!(sum & 1) && (sum > 0))
                     {
                         arr_[i] = INT_MAX;
                         arr_[j] = INT_MAX;
                         // cout << arr[i] << " " << arr[j] << "\n";
                         a = sum / 2;
                         int b1 = (arr[i] - arr[j]) / 2, b2 = (arr[j] - arr[i]) / 2;
                         // cout << b1 << " " << b2 << "\n";
                         // cout << a * b1 << " " << a * b2 << "\n";
                         int m1 = a * b1, m2 = a * b2;
                         for (int i = 0; i < 4; i++)
                         {
                             if (arr_[i] != INT_MAX)
                             {
                                 if (arr_[i] == m1)
                                 {
                                     b = b1;
                                     arr_[i] = INT_MAX;
                                     break;
                                 }
                                 if (arr_[i] == m2)
                                 {
                                     b = b2;
                                     arr_[i] = INT_MAX;
                                     break;
                                 }
                             }
                         }
                         if (b == -1)
                         {
                             a = -1;
                             break;
                         }
                         else
                         {
                             // cout << a << " " << b << " " << (a / b) << "\n";
                             for (int i = 0; i < 4; i++)
                             {
                                 if (arr_[i] != INT_MAX)
                                 {
                                     if (b != 0)
                                     {
                                         if (a / b == arr_[i])
                                             isFound = true;
                                         break;
                                     }
                                 }
                             }
                         }
                     }
                     if (isFound)
                         break;
                 }
             }
             if (isFound)
                 break;
         }
         if (isFound && (a >= 1 && a <= 1e4) && (b >= 1 && b <= 1e4))
             cout << a << " " << b;
         else
             cout << -1 << " " << -1;
         cout << "\n";
          */
        ll nums[4];
        for (int i = 0; i < 4; i++)
            cin >> nums[i];
        sort(nums, nums + 4);
        ll p1 = (nums[2] + nums[0]) / 2;
        ll q1 = nums[2] - p1;
        ll p2 = (nums[2] + nums[1]) / 2;
        ll q2 = nums[2] - p2;
        ll p3 = (nums[3] + nums[0]) / 2;
        ll q3 = nums[3] - p3;
        ll p4 = (nums[3] + nums[1]) / 2;
        ll q4 = nums[3] - p4;
        if ((p1 % 1 == 0) && (p1 != 0) && (q1 % 1 == 0) && (q1 != 0))
            if ((p1 / q1 == nums[1]) && (p1 * q1 == nums[3]) && (p1 >= 1) && (q1 >= 1) && (p1 <= 10000) && (q1 <= 10000))
            {
                cout << p1 << " " << q1 << endl;
                continue;
            }
        if ((p2 % 1 == 0) && (p2 != 0) && (q2 % 1 == 0) && (q2 != 0))
            if ((p2 / q2 == nums[0]) && (p2 * q2 == nums[3]) && (p2 >= 1) && (q2 >= 1) && (p2 <= 10000) && (q2 <= 10000))
            {
                cout << p2 << " " << q2 << endl;
                continue;
            }
        if ((p3 % 1 == 0) && (p3 != 0) && (q3 % 1 == 0) && (q3 != 0))
            if ((p3 / q3 == nums[1]) && (p3 * q3 == nums[2]) && (p3 >= 1) && (q3 >= 1) && (p3 <= 10000) && (q3 <= 10000))
            {
                cout << p3 << " " << q3 << endl;
                continue;
            }
        if ((p4 % 1 == 0) && (p4 != 0) && (q4 % 1 == 0) && (q4 != 0))
            if ((p4 / q4 == nums[0]) && (p4 * q4 == nums[2]) && (p4 >= 1) && (q4 >= 1) && (p4 <= 10000) && (q4 <= 10000))
            {
                cout << p4 << " " << q4 << endl;
                continue;
            }
        cout << "-1 -1" << endl;
    }
    // for (int i = 1; i < 100; i++)
    // {
    //     for (int j = 1; j < 100; j++)
    //     {
    //         cout << i + j << "\t" << i - j << "\t" << (i * j) << "\t" << (i / j) << "\n";
    //         cout << i + j << "\t" << j - i << "\t" << (i * j) << "\t" << (j / i) << "\n";
    //     }
    // }

    return 0;
}
