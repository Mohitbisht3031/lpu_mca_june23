#include<bits/stdc++.h>
using namespace std;


// recursion
int dfs(string&s,int i){
    if(i >= s.size())return 1;
    if(s[i] == '0')return 0;

    int ans = dfs(s,i+1);
    if(i < s.size()-1 && (s[i] == '1' || (s[i] == '2' && s[i+1] < '7')))ans+=dfs(s,i+2);

    return ans;
}

int decode(string s){
    return dfs(s,0);
}

// memoization
int dfs(string&s,int i,vector<int>&dp){
    if(i >= s.size())return 1;
    if(s[i] == '0')return 0;

    if(dp[i] != -1)return dp[i];

    int ans = dfs(s,i+1);
    if(i < s.size()-1 && (s[i] == '1' || (s[i] == '2' && s[i+1] < '7')))ans+=dfs(s,i+2);

    return dp[i] = ans;
}

int decode(string s){
    vector<int>dp(s.size(),-1);
    return dfs(s,0,dp);
}

int main(){
    return 0;
}