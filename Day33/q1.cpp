#include<bits/stdc++.h>
using namespace std;

int shortestPath(vector<vector<int>>&g,int s,int d){
    queue<pair<int,int>>q;
    q.push({s,0});
    vector<int>vis(g.size(),0);
    vis[s] = 1;
    while(!q.empty()){
        pair<int,int> f = q.front();
        q.pop();
        if(f.first == d)return f.second;
        for(int nbr : g[f.first]){
            if(!vis[nbr]){q.push({nbr,f.second+1});
            vis[nbr] = 1;}
        }
    }

    return -1;
}

int main(){
    return 0;
}