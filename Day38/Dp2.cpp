#include<bits/stdc++.h>
using namespace std;


int findSquareMat(vector<vector<int>>&mat){
    vector<vector<int>>dp(mat.size(),vector<int>(dp[0].size(),0));

    int maxi = 0;

    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if((i ==0 || j==0) && mat[i][j] == 0){
                dp[i][j] = 1;
            }else if(mat[i][j] == 0){
                dp[i][j] = min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
            }
            maxi = max(maxi,dp[i][j]);
        }
    }

    return maxi;
}

int main(){
    return 0;
}