//https://leetcode.com/problems/two-sum/
#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>mp;

    for(int i = 0;i<nums.size();i++){
        int v = target - nums[i] ;
        if(mp.count(v)){
            return {mp[v],i};
        }
        mp[nums[i]] = i;
    }
    return {-1,-1};
}

int main(){
    return 0;
}