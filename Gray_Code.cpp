#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> grayCodes;

void generate(vector<int> &v, unsigned int i){
    if (i == v.size()){
        grayCodes.push_back(v);
        return;
    }
    generate(v, i+1);
    v[i] = 1;
    generate(v, i+1);
    v[i] = 0;
}

vector<int> convertGray(vector<int> &bc){
    vector<int> gc(bc.size());
    unsigned int i;
    for(i = 0; i< bc.size(); i++){
       if (bc[i] == 1) break;
    }
    gc[i] = 1;
    i++;
    while (i< bc.size()){
        gc[i] = bc[i-1]^bc[i];
        i++;
    }
    return gc;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> v(n);
    generate(v, 0);
    
    for(auto &i : grayCodes ){
        i = convertGray(i);
        for(int j = 0; j < n; j++){
            cout<<i[j];
        }
        cout<<"\n";
    }

    
    return 0;
}