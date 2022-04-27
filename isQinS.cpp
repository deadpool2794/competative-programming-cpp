// Given a queue Q and a stack of positive integer values, write the code for an algorithm,
// isQinS(stack S, queue Q), that checks whether all the values in the Q are also in the stack or
// not. . You can only use only ONE extra stack OR queue if needed. You can only use the
// basic operation on stacks (i.e. push(), top(), pop(), size(), isFullStack(), and isEmptyStack())
// as well as the basic operations on queues (addQueue(), deleteQueue(), Front(), Rear(),
// isEmptyQueue(), isFullQueue(), Front(), Back(), size()). Once the algorithm is over, both
// stack and queue should look intact.
// Ex.
// If Q= [1, 3,5,4,7,6,9], and S [9,3], then calling isQinS (S,Q), should return true.
// If Q= [4,10,7,6,9,2,16], and S [9,3], then calling isQinS (S,Q), should return false.

// NEED ASAP

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

bool isQinS(queue<int> Q, stack<int> S){
    int sz = S.size();
    queue<int> aux;
    int ct = 0;
    while(S.size()){
        int el_s = S.top();
        S.pop();
        bool isElPresent = false;
        while(Q.size()){
            int el_Q = Q.front();
            Q.pop();
            aux.push(el_Q);
            if(el_Q == el_s) isElPresent = true;
        }
        if(isElPresent)ct++;
        while(aux.size()){
            int el_aux = aux.front();
            aux.pop();
            Q.push(el_aux);
        }
    }

    return ct == sz;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << boolalpha;
    int t = 1;
    //cin >> t;
    while(t--){
        queue<int> Q ;
        Q.push(4);
        Q.push(10);
        Q.push(7);
        Q.push(6);
        Q.push(9);
        Q.push(2);
        Q.push(16);
        stack<int> S;
        S.push(9);
        S.push(3);
        println(isQinS(Q, S));
    }
    return 0;
}


