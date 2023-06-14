#include<bits/stdc++.h>

using namespace std;

int pivotIndex(vector<int>& nums) {
    int ls = 0;
    int ts = accumulate(nums.begin(),nums.end(),0);
    // for(int i = 0;i<nums.size();i++)ts+=nums[i];

    for(int i = 0;i<nums.size();i++){
        int rs = ts - ls - nums[i];
        if(rs == ls)return i;
        ls+=nums[i];
    }

    return -1;

}

int main(){

    return 0;
}