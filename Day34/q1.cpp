#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&g,int i,int j,int c,int ic){
    if(i < 0 || i >= g.size() || j < 0 || j >= g[0].size() || g[i][j] != ic)return ;
    g[i][j] = c;
    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};
    for(int k = 0;k<4;k++){
        dfs(g,i+dx[k],j+dy[k],c,ic);
    }

    return;
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    dfs(image,sr,sc,color,image[sr][sc]);
    return image;        
}

int main(){
    return 0;
}