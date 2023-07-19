#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>&mat,int i,int j,vector<vector<int>>&vis,string str,int k){
    if(i < 0 || i >= mat.size() || j < 0 || j>= mat[0].size() || mat[i][j] != str[k])return 0;
    vis[i][j] = 1;
    
    // way 1
    // if(dfs(mat,i+1,j,vis,str,k+1))return 1;
    // if(dfs(mat,i-1,j,vis,str,k+1))return 1;
    // if(dfs(mat,i,j+1,vis,str,k+1))return 1;
    // if(dfs(mat,i,j-1,vis,str,k+1))return 1;
    // if(dfs(mat,i-1,j+1,vis,str,k+1))return 1;
    // if(dfs(mat,i-1,j-1,vis,str,k+1))return 1;
    // if(dfs(mat,i+1,j+1,vis,str,k+1))return 1;
    // if(dfs(mat,i+1,j-1,vis,str,k+1))return 1;

// Way 2
    int dx[] = {0,0,1,-1,1,1,-1,-1};
    int dy[] = {1,-1,0,0,1,-1,1,-1};

    for(int l = 0;l<8;l++){
        if(dfs(mat,i+dx[l],j+dy[l],vis,str,k+1))return 1;
    }


    return 0;

}

bool hasPath(vector<vector<int>>&mat,string str){
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(mat[i][j] == str[0]){
                vector<vector<int>>vis(mat.size(),vector<int>(mat[0].size(),0));
                if(dfs(mat,i,j,vis,str,0))return 1;
            }
        }
    }

    return 0;
}

int main(){
    return 0;
}