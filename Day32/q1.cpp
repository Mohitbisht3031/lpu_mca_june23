#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>&g,int s,int d,vector<int>&vis){
    if(s == d)return 1;
    vis[s] = 1;
    // bool ans = 0;
    for(int nbrs:g[s]){
        if(!vis[nbrs]){
            if(dfs(g,nbrs,d,vis))return 1; 
        }
    }

    return 0;
}

bool bfs(vector<vector<int>>&g,int s,int e){
    if(s == e)return 1;
    vector<int>vis(g.size(),0);
    queue<int>q;
    q.push(s);
    vis[s] = 1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        if(f == e)return 1;
        for(int nbrs : g[f]){
            if(!vis[nbrs]){
                vis[nbrs] = 1;
                q.push(nbrs);}
        }
    }
    return 0;
}

bool hasPath(vector<vector<int>>&g,int n1,int n2){
    vector<int>vis(g.size(),0);
    // return dfs(g,n1,n2,vis);
    return bfs(g,n1,n2);
}

int main(){
    return 0;
}