#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int>v = {1,0,2,3,0,0,0,4};
    int i = 0 ;
    for(int j = 0;j<v.size();j++){
        if(v[j] != 0){
            v[i] = v[j];
            i++;
        }
    }
    for(int j = i;j<v.size();j++)v[j] = 0;

    for(int j = 0;j<v.size();j++)cout<<v[j]<<" ";
    cout<<endl;

    return 0;
}