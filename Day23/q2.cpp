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

int h(BT*root){
    if(!root)return 0;
    int l = h(root->left);
    int r = h(root->right);
    return max(l,r)+1;
}

bool isBalanced(BT*root){
    if(!root)return 1;
    int lh = h(root->left);
    int rh = h(root->right);
    bool lans = isBalanced(root->left);
    bool rans = isBalanced(root->right);
    if(lans && rans){
        if(abs(lh-rh) <= 1)return 1;
    }

    return 0;
}

int main(){

    return 0;
}