#include<bits/stdc++.h>

using namespace std;

// brute force sol. TC: O(n^2);
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[i] + nums[j] == target)return {i,j};
            }
        }   

        return {-1,-1};
    }

//optimization TC(nlogn)
 vector<int> twoSum(vector<int>& nums, int target) {

    sort(nums.begin(),nums.end());

    int s = 0;
    int e= nums.size()-1;
    while(s < e){
        int sum = nums[s]+ nums[e];
        if(sum == target)return {s,e};
        else if(s < target)s++;
        else e--;
    }

    return {-1,-1};
 }


int main(){
    return 0;
}