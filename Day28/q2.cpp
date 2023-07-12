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

BST*dfs(vector<int>&pre,int preS,int preE,vector<int>&in,int inS,int inE){
    if(inS > inE)return NULL;
    int v = pre[preS];
    BST*root = new BST(v);

    int i = 0;
    while(i <= inE && in[i] != v)i++;

    int linS = inS;
    int linE = i-1;
    int lPreS = preS+1;
    int lPreE = (linE - linS) + preS;

    int rinS = i+1;
    int rinE = inE;
    int rPreS = lPreE+1;
    int rPreE = preE;

    root->left = dfs(pre,lPreS,lPreE,in,linS,linE);
    root->right = dfs(pre,rPreS,rPreE,in,rinS,rinE);
    return root;
}

BST*make(vector<int>&preOrder){
    if(preOrder.size() == 0)return NULL;
    vector<int>in = preOrder;
    sort(in.begin(),in.end());

    return dfs(preOrder,0,preOrder.size()-1,in,0,in.size()-1);
}

// without inorder
BST*dfs(vector<int>&pre,int s,int e){
    if(s > e)return NULL;
    BST*root = new BST(pre[s]);
    int i = s+1;
    while(i <= e && pre[i] < pre[s])i++;
    int lpreS = s+1;
    int lpreE = i-1;
    int rpreS = i;
    int rpreE = e;

    root->left = dfs(pre,lpreS,lpreE);
    root->right = dfs(pre,rpreS,rpreE);
    return root;
}

BST*make(vector<int>&preOrder){
    if(preOrder.size() == 0)return NULL;

    return dfs(preOrder,0,preOrder.size()-1);
}

int main(){

    return 0;
}