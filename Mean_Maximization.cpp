#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

double getSum(double arr[], int n){
    double sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+= arr[i];
    }
    return sum;
    
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double arr[n];
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];
        }

        double mx = *max_element(arr, arr+n);
        double mxSum = getSum(arr, n);
    
        cout<<setprecision(7)<<(mxSum-mx)/(1.0*(n-1)) + (mx)<<"\n";
    }
    return 0;
}