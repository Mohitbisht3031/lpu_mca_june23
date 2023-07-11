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

// using extra space
void in(BST*root,vector<int>&v){
    if(!root)return ;
    in(root->left,v);
    v.push_back(root->d);
    in(root->right,v);
    return;
}

pair<int,int>miniMaxi(BST*root,int val){
    if(!root)return {};
    vector<int>v;
    in(root,v);
    int lInd = lower_bound(v.begin(),v.end() , val) - v.begin();
    int uInd = upper_bound(v.begin(),v.end(),val) - v.begin();

    pair<int,int>p = {-1,-1};
    if(lInd < v.size())p.first = v[lInd];
    if(uInd < v.size())p.second = v[uInd];

    return p;
}

// without extra space
void in(BST*root,int&mini,int&maxi,int val){
    if(!root)return;
    in(root->left,mini,maxi,val);
    if(root->d > mini && root->d < val){
        mini = root->d;
    }
    if(root->d < maxi && root->d > val){
        maxi = root->d;
    }
    in(root->right,mini,maxi,val);
}

pair<int,int>miniMaxi(BST*root,int val){
    if(!root)return {-1,-1};
    int maxi = INT_MAX;
    int mini = INT_MIN;
    in(root,mini,maxi,val);
    return {mini,maxi};
}

int main(){

    return 0;
}