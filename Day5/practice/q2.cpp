#include<bits/stdc++.h>

using namespace std;

// approach 1 (brute force approach)
int singleNumber(vector<int>& nums) {
    for(int i = 0 ;i<nums.size();i++){
        bool f = 1;
        for(int j = 0;j<nums.size();j++){
            if(i!=j && nums[i] == nums[j]){
                f = 0;
            }
        }
        if(f)return nums[i];
    }   
    return -1;
}

//approach 2
int singleNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());

    for(int i = 0;i<nums.size();i++){
        if(i-1 > 0 && nums[i-1] == nums[i])continue;
        else if(i+1 < nums.size() && nums[i+1] == nums[i])continue;
        return nums[i];
    }

    return -1;
}

// approach 3
int singleNumber(vector<int>& nums) {
    int ans = 0;
    for(int i = 0;i<nums.size();i++){
        ans^=nums[i];
    }
    return ans;
}

int main(){
    return 0;
}