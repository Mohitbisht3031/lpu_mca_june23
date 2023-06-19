//https://leetcode.com/problems/shuffle-the-array/
#include<bits/stdc++.h>

using namespace std;


vector<int> shuffle(vector<int>& nums, int n) {
    vector<int>v;
    int i = 0;
    int j = n;
    // while(i < n && j < (2*n)){
    //     v.push_back(nums[i]);
    //     v.push_back(nums[j]);
    //     i++;
    //     j++;
    // }

    bool f = 1;
    while(i < n || j < (2*n)){
        if(f && i < n){
            v.push_back(nums[i]);
            i++;
        }else if(j < 2*n){
            v.push_back(nums[j]);
            j++;
        }
        f = !f;
    }

    return v;
}

int main(){

    return 0;
}