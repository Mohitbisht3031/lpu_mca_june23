#include<bits/stdc++.h>

using namespace std;

//Brute force
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

// kadane's algo
int maxiSum(vector<int>&nums){
    int maxS = INT_MIN;
    int cs = 0;
    for(int i = 0;i<nums.size();i++){
        cs+=nums[i];
        maxS = max(maxS,cs);
        if(cs < 0)cs = 0;
    }
    return maxS;
}

int main(){
    return 0;
}