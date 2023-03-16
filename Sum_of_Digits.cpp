#include<bits/stdc++.h>

using namespace std;


void getSum(int n){
    int sum=0;
    while(n> 0){
        sum += n%10;
        n = n/ 10;
    }
    cout<<sum<<"\n";
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int num;
        cin >> num;
        getSum(num);
    }
    
    return 0;
}