#include<bits/stdc++.h>
using namespace std;

// brute force apporach
vector<int> nextGreater(vector<int>&nums){
    if(nums.size() == 1)return {-1};
    vector<int>v(nums.size(),-1);
    for(int i = nums.size()-1;i>=0;i--){
        bool f = 0;
        for(int k = i+1;k<nums.size();k++){
            if(nums[i] < nums[k]){
                v[i] = nums[k];
                f = 1;
                break;
            }
        }
        if(f)continue;
        for(int k = 0;k<i;k++){
            if(nums[k] > nums[i]){
                v[i] = nums[k];
                break;
            }
        }
    }

    return v;
}

// optimize
vector<int> nextGreater(vector<int>&nums){
    if(nums.size() == 1)return {-1};
        vector<int>v(nums.size(),-1);
    for(int i =0;i<nums.size();i++){
        nums.push_back(nums[i]);
    }   
    stack<int>stk;
    stk.push(nums.size()-1);
    for(int i = nums.size()-2;i>=0;i--){
        while(!stk.empty() && nums[stk.top()] < nums[i])stk.pop();
        if(i < v.size()){
            v[i] = (stk.empty() ? -1 : stk.top());
        }
        stk.push(i);
    }

    return v;
}

int main(){

    return 0;
}