#include<bits/stdc++.h>
using namespace std;

// brute force approach
// TC: O(nlogn)
int kthSmallest(vector<int>&v,int k){
    if(v.size() == 0)return -1;
    sort(v.begin(),v.end());
    return v[k-1];
}

// optimize
// TC: O(klogk)
int kthSmallest(vector<int>&v,int k){
    if(v.size() == 0)return -1;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i = 0;i<v.size();i++){
        if(pq.size() < k)pq.push(v[i]);
        else{
            if(pq.top() < v[i]){
                pq.pop();
                pq.push(v[i]);
            }
        }
    }
    return pq.top();
}

int main(){

    return 0;
}