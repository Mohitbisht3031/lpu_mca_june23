#include<bits/stdc++.h>
using namespace std;

// brute force
int kthSmallest(vector<int>&v,int k){
    if(v.size() == 0)return -1;
    sort(v.begin(),v.end());
    return v[k-1];
}


// optimize
int kthSmallest(vector<int>&v,int k){
    if(v.size() == 0)return -1;
    priority_queue<int>pq;

    for(int i = 0;i<v.size();i++){
        if(pq.size() < k)pq.push(v[i]);
        else{
            if(v[i] < pq.top()){
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