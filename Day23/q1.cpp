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

int height(BT*root){
    if(!root)return 0;
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh,rh)+1;
}

int main(){

    return 0;
}