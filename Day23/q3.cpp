#include<bits/stdc++.h>
using namespace std;

class BT{
    public:
    int data;
    BT*left;
    BT*right;

    BT(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void dfs(BT*root,vector<int>&v,vector<vector<int>>&vec){
    if(!root)return;
    if(!root->left && !root->right){
        v.push_back(root->data);
        vec.push_back(v);
        v.pop_back();
        return;
    }
    v.push_back(root->data);
    dfs(root->left,v,vec);
    dfs(root->right,v,vec);
    v.pop_back();
    return;
}

vector<vector<int>> rootToleaf(BT*root){
    if(!root)return {};
    vector<vector<int>>vec;
    vector<int>v;
    dfs(root,v,vec);
    return vec;
}

int main(){

    return 0;
}