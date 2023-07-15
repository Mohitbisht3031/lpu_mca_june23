#include<bits/stdc++.h>
using namespace std;

void Printdfs(vector<vector<int>>&g2,vector<int>&vis,int s){
    vis[s] = 1;
    cout<<s<<":";
    for(int nbrs : g2[s])cout<<nbrs<<",";
    for(int nbrs : g2[s]){
        if(!vis[nbrs])Printdfs(g2,vis,nbrs);
    }
    return;
}

void Printbfs(vector<vector<int>>&g2,int s){
    vector<bool>vis(g2.size(),0);
    queue<int>q;
    q.push(s);
    
    while(!q.empty()){
        int size = q.size();
        for(int i = 0;i<size;i++){
            int f = q.front();
            q.pop();
            vis[f] = 1;
            cout<<f<<": ";
            for(int nbrs : g[f]){
                if(!vis[nbrs])q.push(nbrs);
                cout<<nbrs<<",";
            }
            cout<<endl;
        }
    }
    
    return;
}

vector<vector<int>> makeUsingMatrix(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>>g(v,vector<int>(v,0));
    for(int i = 0;i<e;i++){
        int a,b;
        cin>>a>>b;
        v[a][b] = 1;
        v[b][a] = 1;
    }
    return g;
}

vector<vector<int>> makeUsingList(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>>g(v);
    for(int i = 0;i<e;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    return g;
}

int main(){
    vector<vector<int>>g = makeUsingMatrix();
    vector<vector<int>>g2 = makeUsingList();
    return 0;
}