#include<bits/stdc++.h>
using namespace std;

// top down apporach / Memoization
int dfs(int n,vector<int>&dp){
    if(n == 1 || n == 0)return n;
    if(dp[n] != -1)return dp[n];

    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}

int fib(int n){
    if( n== 0 || n== 1)return n;
    // return fib(n-1) + fib(n-2);
    vector<int>dp(n+1,-1);
    return dfs(n,dp);
}

// bottom up approach 
int fib(int n){
    if( n== 0 || n== 1)return n;
    
    vector<int>dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }

    return dp[n];
}

int main(){
    return 0;
}