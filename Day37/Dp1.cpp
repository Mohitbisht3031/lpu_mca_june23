#include<bits/stdc++.h>
using namespace std;

// recursive approach
int dfs(string&s1,string&s2,int i,int j){
    if(i>=s1.size() || j>=s2.size())return 0;
    
    if(s1[i] == s2[j]){
        return dfs(s1,s2,i+1,j+1)+1;
    }

    int a = dfs(s1,s2,i+1,j);
    int b = dfs(s1,s2,i,j+1);
    int c = dfs(s1,s2,i+1,j+1);

    return max({a,b,c});
}

int LCS(string s1,string s2){
    if(s1.size() == 0 || s2.size() == 0)return 0;
    // vector<vector<int>>dp(s1.size(),vector<int>(s2.size(),-1));
    return dfs(s1,s2,0,0);
}

// memoized
int dfs(string&s1,string&s2,int i,int j,vector<vector<int>>&dp){
    if(i>=s1.size() || j>=s2.size())return 0;
    
    if(dp[i][j] != -1)return dp[i][j];

    if(s1[i] == s2[j]){
        return dfs(s1,s2,i+1,j+1)+1;
    }

    int a = dfs(s1,s2,i+1,j);
    int b = dfs(s1,s2,i,j+1);
    int c = dfs(s1,s2,i+1,j+1);

    return dp[i][j] = max({a,b,c});
}

int LCS(string s1,string s2){
    if(s1.size() == 0 || s2.size() == 0)return 0;
    vector<vector<int>>dp(s1.size(),vector<int>(s2.size(),-1));
    return dfs(s1,s2,0,0,dp);
}



int main(){
    return 0;
}