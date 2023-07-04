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

BT* mirror(BT*root){
    if(!root)return root;
    BT*lans = mirror(root->left);
    BT*rans = mirror(root->right);
    root->left = rans;
    root->right = lans;
    return root;
}

int main(){

    return 0;
}