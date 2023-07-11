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

BST*LCA(BST*root,BST*p,BST*q){
    if(!root)return root;
    
    if(root->d == p->d || root->d == q->d)return root;
    if((root->d < q->d && root->d > p->d) || (root->d > q->d && root->d < p->d))return root;
    else if((root->d < q->d && root->d < p->d))return LCA(root->right,p,q);
    else if((root->d > q->d && root->d > p->d)) return LCA(root->left,p,q);

    return NULL;
}

int main(){

    return 0;
}