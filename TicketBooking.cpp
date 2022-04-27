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

vector<vc> theatre;

int convert(string &num_s)
{
    int n = num_s.size(), num;
    int pw = pow(10, n - 1);
    for (char i : num_s)
    {
        int curr = i - '0';
        num += curr * pw;
        pw /= 10;
    }
    return num;
}

vc formatRows(string &row)
{
    vc row_v;
    for (char i : row)
        row_v.push_back(i);
    return row_v;
}

vi formatGroups(string &groups)
{
    groups += ',';
    string curr;
    vi groups_int;
    for (char i : groups)
    {
        if (i == ',')
        {
            groups_int.push_back(convert(curr));
            curr = "";
            continue;
        }
        curr += i;
    }
    return groups_int;
}

vi reorder(vi &order)
{
    vi priorityBased;
    priorityBased.push_back(-1);
    int n = order.size();
    for (int i = n / 2; i < n; i++)
        priorityBased.push_back(order[i]);
    for (int i = (n / 2) - 1; i >= 0; i--)
        priorityBased.push_back(order[i]);

    return priorityBased;
}

vi getEmptySeats(vector<vc> &theatre){
    vi emptySeats;
    emptySeats.push_back(-1);
     for(vc i : theatre){
            int ct = 0;
            for(char j : i)
                if (j == '_') ct++;
            emptySeats.push_back(ct);
        }
    return emptySeats;
}

void arrange(int i, int j, vi &priorityBased, vi &emptySeats){
    // prints(priorityBased[i]);
    // prints(emptySeats[j]);
    // println("");
    int theatreIndex = j-1;
    int seatsFilled = priorityBased[i];
    for(int k = 0; k < theatre[theatreIndex].size() && seatsFilled; k++){
        if(theatre[theatreIndex][k] == '_'){
            theatre[theatreIndex][k] = i+'0';
            seatsFilled--;
        }
    }
    emptySeats[j] -= priorityBased[i];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        string dummy, groups;
        cin >> n;
        getline(cin, dummy);
        for (int i = 0; i < n; i++)
        {
            string row_s;
            getline(cin, row_s);
            theatre.push_back(formatRows(row_s));
        }

        // for(vc i : theatre){
        //     for (char j : i) prints(j);
        //     println("");
        // }
        getline(cin, groups);
        vi groups_v = formatGroups(groups);

        vi priorityBased = reorder(groups_v);
        vi emptySeats = getEmptySeats(theatre);
       
        for(int i = 1; i <= priorityBased.size(); i++){
            for (int j = 1; j < emptySeats.size(); j++)
            {
                if(priorityBased[i] <= emptySeats[j]){
                    arrange(i, j, priorityBased, emptySeats);
                    break;
                }
            }   
        }
        for(auto i : theatre){
            for(auto j : i) print(j);
            println("");
        }
    }
    return 0;
}
