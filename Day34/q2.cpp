#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>&g,int s,vector<int>&vis,vector<int>&c,int nc){
    vis[s] = 1;
    c[s] = nc;

    for(int nbr:g[s]){
        if(!vis[nbr]){
            if(!dfs(g,nbr,vis,c,0-nc))return 0;
        }else{
            if(c[nbr] != 0-nc)return 0;
        }
    }

    return 1;
}

bool bipatite(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    vector<int>c(g.size(),0);
    bool ans = 1;
    for(int i = 0;i<vis.size();i++){
        if(!vis[i]){
            ans = ans & dfs(g,i,vis,c,1);
        }
    }
    return ans;
}

int main(){
    return 0;
}