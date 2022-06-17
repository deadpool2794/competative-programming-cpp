// Edhi okasaari Moyya anamma
// Velli aadukomma
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<char> vc;
#define M 1000000007
#define print(x) cout << (x)
#define prints(x) cout << (x) << " "
#define ALL(x) x.begin(), x.end()
#define println(x) cout << (x) << "\n"

string convertToString(int num)
{
    string str = "";
    while (num)
    {
        int rem = num % 10;
        str = (char)(rem + '0') + str;
        num /= 10;
    }
    return str;
}

int getMinimumDigit(int num)
{
    int digit = 9;
    if (num < 100)
        digit = num % 10;
    else{
        string numStr = convertToString(num);
        for(char i : numStr){
            i = int(i - '0');
            if(i < digit) digit = i;
        }
    }
    return digit;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << boolalpha;

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        println(getMinimumDigit(n));
    }
    return 0;
}
