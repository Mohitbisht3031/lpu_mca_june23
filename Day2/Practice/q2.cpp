
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    vector<int>v;
    for(int i = 0;i<nums.size();i++){
        if(v.size() == 0 || v.back() != nums[i]){
            v.push_back(nums[i]);
        }
    }

    for(int i = 0;i<v.size();i++)nums[i] = v[i];

    return v.size();
}

int removeDuplicates(vector<int>& nums) {

    int i = 0;
    for(int j = 0;j<nums.size();j++){
        if(j == nums.size()-1){nums[i] = nums[j];
        i++;
        }
        for(int k = j;k<nums.size();k++){
            if(nums[k] != nums[j]){
                nums[i] = nums[j];
                i++;
                j=k-1;
                break;
            }
        }
    }

    return i;
}


int main(){
    return 0;
}