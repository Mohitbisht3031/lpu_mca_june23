#include<bits/stdc++.h>

using namespace std;

int digiS(int n){
    int s = 0;
    while(n){
        s+=(n%10);
        n/=10;
    }
    return s;
}

    int differenceOfSum(vector<int>& nums) {
        int s = 0,ds= 0;
        for(int i = 0;i<nums.size();i++){
            s+=nums[i];
            ds+=digiS(nums[i]);
        }       

        // return (s >= ds ? s-ds : ds-s); 
        return abs(ds-s);
    }

int main(){

    return 0;
}