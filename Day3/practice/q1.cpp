#include<bits/stdc++.h>

using namespace std;

void reverse(vector<int>&v,int r){
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+r);
    reverse(v.begin()+r,v.end());
    cout<<"in reverser func"<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return;
}

int main(){

    vector<int>v = {1,2,3,4,5};
    int r;
    cin>>r;
    // vector<int>nv(v.size());
    // for(int i = 0;i<v.size();i++){
    //     nv[(i+r)%v.size()] = v[i];
    // }
    reverse(v,r);
    cout<<"in main func"<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}