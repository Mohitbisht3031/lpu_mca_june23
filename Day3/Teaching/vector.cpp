#include<bits/stdc++.h>

using namespace std;

int main(){

    // vector<vector<int>>v;
    // vector<vector<int>>v(5);
    // vector<vector<int>>v(5,vector<int>(3));
    vector<vector<int>>v(5,vector<int>(3,1));

    for(int i = 0;i<v.size();i++){
        for(int j= 0;j<v[0].size();j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }

    // vector<int>v;
    // vector<int>v1(5);
    // vector<int>v(5,1);
    // for(int i = 0;i<v.size();i++)cout<<v[i]<<" ";
    // cout<<endl;
    return 0;
}