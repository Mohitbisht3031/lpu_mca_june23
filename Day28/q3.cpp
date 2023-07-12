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

// 
void dfs(BST*root,vector<int>&v){
    if(!root)return ;
    dfs(root->left,v);
    v.push_back(root->d);
    dfs(root->right,v);
    return;
}

bool twoSum(BST*root,int t){
    if(!root)return 0;
    vector<int>v;
    dfs(root,v);
    int i = 0;
    int j = v.size()-1;
    while(i < j){
        if(v[i]+v[j] == t){
            return 1;
        }else if(v[i] + v[j] > t){
            j--;
        }else i++;
    }
    return 0;
}

// 

bool dfs(BST*root,unordered_map<int,int>&mp,int t){
    if(!root)return 0;
    bool lans = dfs(root->left,mp,t) ;
    if(lans)return 1;
    if(mp.count(t - root->d))return 1;
    mp[t-root->d]++;
    return dfs(root->right,mp,t);
}

bool twoSum(BST*root,int t){
    if(!root)return 0;
    unordered_map<int,int>mp;
    return dfs(root,mp,t);
}

int main(){

    return 0;
}