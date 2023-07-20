#include<bits/stdc++.h>
using namespace std;

// recursive sol. / Meomization / top down apporach
int dfs(int n,vector<int>&dp){
    if(n <= 1)return n;

    if(dp[n] != -1)return dp[n];
    int ans = dfs(n-1,dp)+dfs(n-2,dp)+dfs(n-3,dp);
    dp[n] = ans;
    return dp[n];
}

int noOfWay(int n){
    if(n <= 1)return 1;
    vector<int>dp(n+1,-1);
    return dfs(n,dp);
}

// bottom up
int noOfWay(int n){
    if(n <= 1)return 1;
    vector<int>dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    return dp[n];
}

int main(){
    return 0;
}