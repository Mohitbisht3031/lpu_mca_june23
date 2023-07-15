#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>&g,int s,int d,vector<bool>&vis){
    if(s == d)return 1;
    vis[s] = 1;
    bool ans = 0;
    for(int nbrs : g[s]){
        if(!vis[nbrs])ans = ans || dfs(g,nbrs,d,vis);
    }

    return ans;
}

bool hasPath(vector<vector<int>>&g,int n1,int n2){
    vector<bool>vis(g.size(),0);
    return dfs(g,n1,n2,vis);
}

int main(){
    // vector<vector<int>>g = makeUsingMatrix();
    // vector<vector<int>>g2 = makeUsingList();
    return 0;
}