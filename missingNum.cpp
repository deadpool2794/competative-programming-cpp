#include<iostream>

using namespace std;

int main(){
    long long int n, i=0, c= 0, a, missingNum, totSum;
    cin>>n;
    
    while (i != n-1){
        cin>>a;
        c += a;
        i++;
    }
    totSum = (n*(n+1))/2;
    missingNum = totSum - c;
    cout<< missingNum;

    

    return 0;
}