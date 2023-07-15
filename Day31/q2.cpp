#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&g,int s,vector<bool>&vis){
    vis[s] = 1;
    for(int nbrs : g[s]){
        if(!vis[nbrs])dfs(g,nbrs,vis);
    }
    return;
}

bool countConnectedComp(vector<vector<int>>&g){
    vector<bool>vis(g.size(),0);
    int c = 0;
    for(int i = 0 ;i<vis.size();i++){
        if(!vis[i]){
            c++;
            dfs(g,i,vis);
        }
    }
    return c;
}

int main(){
    // vector<vector<int>>g = makeUsingMatrix();
    // vector<vector<int>>g2 = makeUsingList();
    return 0;
}