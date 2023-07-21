#include<bits/stdc++.h>
using namespace std;

// recursion / memoization / top down

int dfs(int n,vector<int>&dp){
    if(n <= 3)return n;

    if(dp[n] != -1)return dp[n];

    int ans = n;
    for(int i = 1;i<=n;i++){
        int t = i*i;
        if(t > n)break;
        ans = min(ans,dfs(n-t,dp)+1);
    }

    return dp[n] = ans;
}

int minCount(int n){
    vector<int>dp(n+1,-1);
    return dfs(n,dp);
}

int main(){
    return 0;
}