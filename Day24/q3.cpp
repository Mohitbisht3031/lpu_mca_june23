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

BT* helper(vector<int>&pre,int preS,int preE,vector<int>&in,int inS,int inE){
    if(inS > inE)return NULL;
    BT*root = new BT(pre[preS]);
    int i = 0;
    while(i < in.size() && in[i] != pre[preS])i++;

    int lpreS = preS+1;
    int linS = inS;
    int linE = i-1;
    int lpreE = (linE - linS) + lpreS;

    int rpreS = lpreE+1;
    int rpreE = preE;
    int rinS = i+1;
    int rinE = inE;

    root->left = helper(pre,lpreS,lpreE,in,linS,linE);
    root->right = helper(pre,rpreS,rpreE,in,rinS,rinE);

    return root;
}

BT* makeBT(vector<int>&pre,vector<int>&in){
    return helper(pre,0,pre.size()-1,in,0,in.size()-1);
}

int main(){

    return 0;
}