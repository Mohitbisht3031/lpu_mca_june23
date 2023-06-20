//https://leetcode.com/problems/majority-element/
#include<bits/stdc++.h>

using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int,int>mp;
    for(int e:nums){
        mp[e]++;
    }        
    for(auto m:mp){
        if(m.second >= (nums.size())/2)return m.first;
    }
    
    return -1;
}

// Arrays.sort(nums);
// return nums[nums.length/2];

int main(){
    return 0;
}