#include <bits/stdc++.h>

using namespace std;

// void printArr(int a[])
// {
//     for (int i = 0; i < 26; i++)
//     {
//         cout << a[i] << endl;
//     }
// }

// void print(vector<int> v)
// {
//     for (auto val : v)
//     {
//         cout << val << " ";
//     }
//     cout << "\n";
// }
// int a = 20;

// void function(char **ptr)
// {
//     char *ptr1;
//     ptr1 = (ptr += sizeof(int))[-1];
//     printf("%s\n", ptr1);
// }
// class Test
// {
//     static int i;
//     int j;
// };
// int Test ::i;

int main()
{

    // ios::sync_with_stdio(0);
    // cin.tie(0);

    // int n = 32;
    // cout<<(~n);
    // vector<pair<int, int>> v = {{1, 2}, {2, 3}, {4, 5}};

    // vector<pair<int, int>>::iterator it;

    // // pair<int, int> p = {1,2};
    // // cout<<(p.first);
    // for(it = v.begin(); it != v.end(); it++){

    //     cout<<(it->first)<<" "<<(it->second)<<"\n";
    // }
    // int arr[26] = {0};
    // printArr(arr);
    // int l = sizeof(arr)/sizeof(arr[0]);
    // cout<<l;

    // vector<int> v = {1, 2,3, 4,5 ,6,74,32,46,74, 4, 3, 2, 78, 56, 46};
    // print(v);

    // // sort(v.begin(), v.end());
    // // print(v);
    // unique(v.begin(), v.end());
    // print(v);
    // int a = 10;
    // cout<<a<<" "<<::a;

    // char *arr[] = {"aaa", "bbb"};
    // function(arr);
    // cout<<('z' + 10);

    // char ch[] = {'z', 'o', 'h', 'o'};
    // char *ptr, *str1;
    // ptr = ch;
    // str1 = ch;
    // // int i = (*ptr-- + ++*str1) -10;
    // cout<<++*str1;
    // // cout<<i;

    // int n[] = {8, 1, 3, 9, 4};
    // int j, *y = n;
    // for (j = 0; j < 5; j++)
    // {
    //     if (j % 2 == 0)
    //         *y++;
    //     printf("%d", *y);
    // }

    // int a[10][10] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    // int *p = a[3];
    // int result = (*p + 2) * a[4][1] + (++*p) + (*p + 7);
    // cout << result;

    string s = "AlIm";
    for(auto i : s){
        cout<<char(i^' ');
    }


    return 0;
}
