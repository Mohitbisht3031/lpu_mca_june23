#include<bits/stdc++.h>

using namespace std;

// greedy approach / brute force approach
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>v;
    for(int i = 0;i<nums1.size();i++){
        v.push_back(nums1[i]);
    }
    for(int i = 0;i<nums2.size();i++){
        v.push_back(nums2[i]);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        nums1[i] = v[i];
    }
    return;
}

//time optimized
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>v;
    int i = 0 ;
    int j = 0; 
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] <= nums2[j]){
            v.push_back(nums1[i]);
            i++;
        }else{
            v.push_back(nums2[j]);
            j++;
        }
    }

    while(i < nums1.size()){
        v.push_back(nums1[i]);
        i++;
    }

    while(j < nums2.size()){
        v.push_back(nums2[j]);
        j++;
    }

    for(int i = 0;i<v.size();i++){
        nums1[i] = v[i];
    }

    return;
}


int main(){
    return 0;
}