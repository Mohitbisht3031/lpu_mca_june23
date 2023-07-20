#include<bits/stdc++.h>
using namespace std;

// recursive approach / memoization / top down
int dfs(int n,vector<int>&dp){
    if(n == 1 || n==0)return 0;
    
    if(dp[n] != -1)return dp[n];

    int ans1 = minSteps(n-1)+1;
    int ans2 = 9999;
    int ans3 = 9999;
    if(n%2 == 0)ans2 = minSteps(n/2)+1;
    if(n%3 == 0)ans3 = minSteps(n/3)+1;

    return dp[n] = min({ans1,ans2,ans3});
}
int minSteps(int n){
    if(n == 0 || n == 1)return 0;
    vector<int>dp(n+1,-1);
    return dfs(n,dp);
}

// bottom up
int minSteps(int n){
    if(n == 0 || n == 1)return 0;
    vector<int>dp(n+1);
    dp[0] = 0;
    dp[1] = 0;
    for(int i = 2;i<=n;i++){
        int a1 = dp[i-1]+1;
        int a2 = 9999;
        int a3= 9999;
        if(i%2 == 0)a2 = dp[i/2]+1;
        if(i%3 == 0)a3 = dp[i/3]+1;
        dp[i] = min({a1,a2,a3});
    }

    return dp[n];
}


int main(){
    return 0;
}