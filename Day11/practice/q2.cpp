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

// optimized approach
int majorityElement(vector<int>& nums) {
    int me = nums[0];
    int f = 1;
    for(int i = 1;i<nums.size();i++){
        if(nums[i] == me){
            f++;
        }else{
            f--;
        }
        if(f <= 0){
            me = nums[i];
            f = 1;
        }
    }

    return me;
}

int main(){
    return 0;
}