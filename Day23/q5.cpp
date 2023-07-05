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

int maxRootLeafSum(BT*root){
    if(!root)return 0;
    int ls = maxRootLeafSum(root->left);
    int rs = maxRootLeafSum(root->right);
    return max(ls,rs)+root->data;
}

int main(){

    return 0;
}