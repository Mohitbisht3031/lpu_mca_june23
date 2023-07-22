#include<bits/stdc++.h>
using namespace std;

// recursive approach

int dfs(vector<int>&val,vector<int>&weight,int w,int i){
    if(i>=val.size() || w == 0)return 0;
    if(weight[i] > w)return dfs(val,weight,w,i+1);

    int a = dfs(val,weight,w-weight[i],i+1)+val[i];
    int b = dfs(val,weight,w,i+1);
    return max(a,b);
}

int knapsack(vector<int>&val,vector<int>&weight,int w){
    return dfs(val,weight,w,0);
}

// memoize 
int dfs(vector<int>&val,vector<int>&weight,int w,int i,vector<vector<int>>&dp){
    if(i>=val.size() || w == 0)return 0;
    if(dp[w][i] != -1)return dp[w][i];
    if(weight[i] > w)return dp[w][i] = dfs(val,weight,w,i+1,dp);

    int a = dfs(val,weight,w-weight[i],i+1,dp)+val[i];
    int b = dfs(val,weight,w,i+1,dp);
    return dp[w][i] = max(a,b);
}

int knapsack(vector<int>&val,vector<int>&weight,int w){
    vector<vector<int>>dp(w+1,vector<int>(val.size(),-1));
    return dfs(val,weight,w,0,dp);
}


int main(){
    return 0;
}