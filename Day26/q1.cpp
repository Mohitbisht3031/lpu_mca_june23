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

bool dfs(BST*root,int lb,int ub){
    if(!root)return 1;
    if(root->d <= lb || root->d >= ub)return 0;
    return dfs(root->left,lb,root->d) && dfs(root->right,root->d,ub);
}

bool validate(BST*root){
    if(!root)return 1;
    return dfs(root,INT_MIN,INT_MAX);
}

int main(){

    return 0;
}