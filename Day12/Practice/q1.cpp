//https://leetcode.com/problems/search-insert-position/
#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    for(int i = 0;i<nums.size();i++){
        if(nums[i] >= target)return i;
    }

    return nums.size();
}

// using lower_bound
int searchInsert(vector<int>& nums, int target) {
    int ind = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
    return (nums[ind] == target ? ind : ind+1);
}

int main(){
    return 0;
}