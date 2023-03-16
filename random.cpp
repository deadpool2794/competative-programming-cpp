// // #include <bits/stdc++.h>
// // using namespace std;

// // typedef long long ll;

// // const int M = 1e9 + 7;

// // ll binExpo(ll a, ll b)
// // {
// //     int ans = 1;
// //     while (b)
// //     {
// //         if (b & 1)
// //         {
// //             ans = (ans * 1LL * a) % M;
// //         }
// //         a = (a * 1LL * a) % M;
// //         b >>= 1;
// //     }
// //     return ans;
// // }

// // int main()
// // {
// //     ios::sync_with_stdio(0);
// //     cin.tie(0);
// //     ll n, ans = 0;
// //     cin >> n;
// //     ll wc, wp;
// //     cin >> wc >> wp;
// //     ans += binExpo(wc, n);
// //     ans += wp;
// //     ans %= M;
// //     ll temp = binExpo(wc, (n - 2));
// //     temp -= 1;
// //     temp = ((temp % M) * (wp % M)) % M;
// //     temp /= (wc - 1);
// //     temp = (temp * wc) % M;
// //     temp = (temp + temp) % M;
// //     ans += temp;
// //     cout << ans;

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// int main()
// {

//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     cout << "hii" << " ";

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int ct = 0;
//     sort(arr, arr + n);

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (arr[j] != 0)
//             {
//                 if (arr[j] % arr[i] == 0)
//                 {
//                     arr[j] = 0;
//                     ct += 1;
//                 }
//             }
//             if (ct >= (n - 1))
//                 break;
//         }
//         if (ct >= (n - 1))
//             break;
//     }

//     cout << ct;
//     return 0;
// }


d