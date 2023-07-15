#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&g,int s,vector<bool>&vis){
    vis[s] = 1;
    for(int nrb : g[s]){
        if(!vis[nrb])dfs(g,nrb,vis);
    }
    return;
}

bool isConnected(vector<vector<int>>&g){
    vector<bool>vis(g.size(),0);
    dfs(g,0,vis);
    for(int i=0;i<vis.size();i++){
        if(!vis[i])return 0;
    }
    return 1;
}

int main(){
    // vector<vector<int>>g = makeUsingMatrix();
    // vector<vector<int>>g2 = makeUsingList();
    return 0;
}