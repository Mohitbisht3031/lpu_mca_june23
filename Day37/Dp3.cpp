#include<bits/stdc++.h>
using namespace std;

// recursive approach

int dfs(vector<int>&val,int i){
    if(i >= val.size())return 0;

    int p = dfs(val,i+2)+val[i];
    int np = dfs(val,i+1);
    
    return max(p,np);
}

int maxLoot(vector<int>&val){
    if(val.size() == 1)return val[0];

    return dfs(val,0);
}

// memoize

int dfs(vector<int>&val,int i,vector<int>&dp){
    if(i >= val.size())return 0;

    if(dp[i] != -1)return dp[i];

    int p = dfs(val,i+2)+val[i];
    int np = dfs(val,i+1);
    
    return dp[i] = max(p,np);
}

int maxLoot(vector<int>&val){
    if(val.size() == 1)return val[0];
    vector<int>dp(val.size(),-1);
    return dfs(val,0,dp);
}


int main(){
    return 0;
}