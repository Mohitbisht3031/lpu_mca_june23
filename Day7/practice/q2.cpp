#include<bits/stdc++.h>

using namespace std;

int maxiSum(vector<int>&nums){
    int maxi = 0;
    for(int i = 0;i<nums.size()-1;i++){
        int s = 0;
        for(int j = i;j<nums.size();j++){
            s+=nums[j];
            maxi = max(maxi,s);
        }
    }
    return maxi;
}

int main(){
    return 0;
}