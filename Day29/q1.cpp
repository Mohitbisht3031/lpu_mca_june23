#include<bits/stdc++.h>
using namespace std;

// brute force
vector<int> kSortedArray(vector<vector<int>>&arr){
    if(arr.size() == 0)return {};
    vector<int>v;
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr[i].size();j++){
            v.push_back(arr[i][j]);
        }
    }
    sort(v.begin(),v.end());
    return v;
}

// optimize

vector<int> kSortedArray(vector<vector<int>>&arr){
    if(arr.size() == 0)return {};
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr[i].size();j++){
            pq.push(arr[i][j]);
        }
    }

    vector<int>v;
    while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
    return v;
}

int main(){

    return 0;
}