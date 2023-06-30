#include<bits/stdc++.h>
using namespace std;

// brute force apporach
vector<int> nextGreater(vector<int>&nums){
    if(nums.size() == 1)return {-1};
    vector<int>v(nums.size(),-1);
    for(int i = nums.size()-2;i>=0;i--){
        for(int j = i+1;j<nums.size();j++){
            if(nums[j] > nums[i]){
                v[i] = nums[j];
                break;
            }
        }
    }

    return v;
}

// optimize
vector<int> nextGreater(vector<int>&nums){
    if(nums.size() == 1)return {-1};
    stack<int>stk;
    vector<int>v(nums.size(),-1);
    stk.push(nums.size()-1);
    for(int i = nums.size()-2;i>=0;i--){
        while(!stk.empty() && nums[stk.top()] < nums[i])stk.pop();
        v[i] = (stk.empty() ? -1 : nums[stk.top()]);
        stk.push(i);
    }
    return v;
}

int main(){

    return 0;
}