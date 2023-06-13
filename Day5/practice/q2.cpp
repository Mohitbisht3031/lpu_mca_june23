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


int main(){
    return 0;
}