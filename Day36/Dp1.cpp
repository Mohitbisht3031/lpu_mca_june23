#include<bits/stdc++.h>
using namespace std;

// recursion / memoization / top down

int dfs(int h,vector<int>&dp){
       if(h <= 1)return 1;
    int mod = 1e9+7;

    if(dp[h] != -1)return dp[h];

    int t1 = dfs(h-1,dp);
    int t2 = dfs(h-2,dp);

    int ans1 = (t1*t1)%mod;
    int ans2 = (t1*t2*2)%mod;

    return dp[h] = (ans1+ans2)%mod;
}

int noOfBT(int h){
 vector<int>dp(h+1,-1);
    return dfs(h,dp);
}

// bottom up approach
int noOfBT(int h){
    if(h <= 1)return 1;
    vector<int>dp(h+1);
    dp[0] = 0;
    dp[1] = 1;
    int mod = 1e9+7;
    for(int i =2;i<=h;i++){
        int t1 = dp[i-1];
        int t2 = dp[i-2];
        int ans1 = (t1*t1)%mod;
        int ans2 = (t1*t2*2)%mod;

        dp[i] = (ans1+ans2)%mod;
    }

    return dp[h];
}

int main(){
    return 0;
}