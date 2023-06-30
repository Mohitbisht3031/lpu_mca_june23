#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/sliding-window-maximum/
// brute force
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    if(k >= nums.size())return {*max_element(nums.begin(),nums.end())};
    vector<int>v;
    for(int i = 0;i<nums.size()-k;i++){
        int maxi = 0;
        for(int j = 0;j<k;j++){
            if(i+j < nums.size())maxi = max(maxi,nums[i+j]);
        }
        v.push_back(maxi);
    }        
    return v;
}

// optimize
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    if(k >= nums.size())return {*max_element(nums.begin(),nums.end())};
    deque<int>dq;
    for(int i = 0;i<k;i++){
        while(!dq.empty() && nums[dq.back()] < nums[i])dq.pop_back();
        dq.push_back(i);
    }
    vector<int>v;
    for(int i = k;i<nums.size();i++){
        v.push_back(nums[dq.front()]);
        while(!dq.empty() && nums[dq.back()] < nums[i])dq.pop_back();
        dq.push_back(i);
        while(!dq.empty() && i - dq.front()+1 >k)dq.pop_front();
    }
    v.push_back(nums[dq.front()]);

    return v;
}

int main(){

    return 0;
}