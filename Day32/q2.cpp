#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&g,int s,vector<int>&vis){
    vis[s] = 1;
    for(int nbr:g[s]){
        if(!vis[nbr]){
            dfs(g,nbr,vis);
        }
    }
    return ;
}

void bfs(vector<vector<int>>&g,int s,vector<int>&vis){
    queue<int>q;
    q.push(s);
    vis[s] = 1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(int nbr : g[s]){
            if(!vis[nbr]){
                q.push(nbr);
                vis[nbr] = 1;
            }
        }
    }
    return ;
}

int connectedComp(vector<vector<int>>&g){
    int c = 0;
    vector<int>vis(g.size(),0);
    for(int i = 0;i<vis.size();i++){
        if(!vis[i]){
            c++;
            // dfs(g,i,vis);
            bfs(g,i,vis);
        }
    }
    return c;
}

int main(){
    return 0;
}