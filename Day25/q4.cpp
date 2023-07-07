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

BT* LCA(BT*root,BT*p,BT*q){
    if(!root)return root;
    if(root->data == p->data || root->data == q->data)return root;

    BT*lans = LCA(root->left,p,q);
    BT*rans = LCA(root->right,p,q);

    if(!lans && rans)return rans;
    else if(!rans && lans)return lans;
    else if(lans && rans)return root;

    return NULL;
}

int main(){

    return 0;
}