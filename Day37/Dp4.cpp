#include<bits/stdc++.h>
using namespace std;


int LIS(vector<int>&arr){
    if(arr.size() <= 1)return arr.size();
    vector<int>dp(arr.size(),1);
    int maxi = 1;
    for(int i = 0;i<arr.size();i++){
        for(int j = i-1;j>=0;j--){
            if(arr[j] < arr[i] && dp[j] + 1 > dp[i]){
                dp[i] = dp[j]+1;
                maxi= max(maxi,dp[i]);
            }
        }
    }

    return maxi;
}



int main(){
    return 0;
}