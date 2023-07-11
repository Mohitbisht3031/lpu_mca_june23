#include<bits/stdc++.h>
using namespace std;

class BST{
    public:
    int d;
    BST*left;
    BST*right;

    BST(int d){
        this->d = d;
        left = NULL;
        right = NULL;
    }
};

BST*dfs(vector<int>&arr,int s,int e){
    if(s > e)return NULL;
    int mid = s+(e-s)/2;
    BST*root = new BST(arr[mid]);
    
    root->left = dfs(arr,s,mid-1);
    root->right = dfs(arr,mid+1,e);

    return root;
}

BST*convert(vector<int>&arr){
    if(arr.size() == 0)return NULL;
    return dfs(arr,0,arr.size()-1);
}

int main(){

    return 0;
}