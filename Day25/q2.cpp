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

bool hasPathSum(BT* root, int ts) {
   if(!root)return 0;
   if(!root->left && !root->right){
    return root->data == ts;
   }      
   return (hasPathSum(root->left,ts - root->data) == 0? (hasPathSum(root->right,ts-root->data) ? 1 : 0) : 1);
}


int main(){

    return 0;
}