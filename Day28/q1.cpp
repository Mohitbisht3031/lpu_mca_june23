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

// using extra space
void in(BST*root,vector<int>&v){
    if(!root)return;
    in(root->left,v);
    v.push_back(root->d);
    in(root->right,v);
    return ;
}

int kthSmallest(BST*root,int k){
    if(!root)return INT_MAX;
    vector<int>v;
    in(root,v);
    return v[k-1];
}

// without using exta space
int in(BST*root,int&k){
    if(!root)return -1;
    int lans = in(root->left,k);
    if(lans != -1)return lans;
    if(k == 1)return root->d;
    k--;
    in(root->right,k);
    return;
}

int kthSmallest(BST*root,int k){
    if(!root)return INT_MAX;
    return in(root,k);
}



int main(){

    return 0;
}