#include<bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>>&cake,int i,int j){
    if(i < 0 || i >= cake.size() || j < 0 || j>= cake[0].size() || cake[i][j] == 0)return 0;

    cake[i][j] = 0;
     
    int ans = 0;

// way 1
    int dx[] = {0,0,-1,1};
    int dy[] = {1,-1,0,0};

    for(int k = 0;k<4;k++){
        ans+=dfs(cake,i+dx[k],j+dy[k]);
    }
// way 2
    // ans+=dfs(cake,i+1,j);
    // ans+=dfs(cake,i-1,j);
    // ans+=dfs(cake,i,j+1);
    // ans+=dfs(cake,i,j-1);

    return ans+1;
}

int biggestPiece(vector<vector<int>>&cake){
    int maxi = 0;
    for(int i = 0 ;i<cake.size();i++){
        for(int j = 0;j<cake[0].size();j++){
            if(cake[i][j] == 1){
                int c = dfs(cake,i,j);
                maxi = max(maxi,c);
            }
        }
    }
    return maxi;
}

int main(){
    return 0;
}