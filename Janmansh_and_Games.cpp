#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin >> t;
while(t--){
   int x , m;
   cin >> x >> m;
   if (x % 2 == 0){ 
       if (m % 2 == 0) cout << "Janmansh";
       else cout << "Jay";
   }else{
       if (m % 2 == 0) cout << "Jay";
       else cout << "Janmansh";

   }
   cout << "\n";
}
return 0;
}
