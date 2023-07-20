#include<bits/stdc++.h>
using namespace std;

int minThrows(vector<int>&moves){
    vector<int>vis(moves.size(),0);
    queue<pair<int,int>>q;
    q.push({0,0});
    vis[0] = 1;
    while(!q.empty()){
        pair<int,int>f = q.front();
        q.pop();

        if(f.first == moves.size()-1)return f.second;

        for(int i = 1;i<=6;i++){
            if(f.first+1 < moves.size()){
                pair<int,int>p = {f.first+i,f.second+1};
                vis[f.first+i] = 1;
                if(moves[f.first+i] != -1){
                    p.first = moves[f.first+i];
                }
                q.push(p);
            }
        }

    }
    return -1;
}

int main(){
    return 0;
}