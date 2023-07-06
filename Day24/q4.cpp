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

// using level order traversal / BFS
vector<int> rightView(BT*root){
    if(!root)return {};
    vector<int>ans;
    queue<BT*>q;
    q.push(root);
    ans.push_back(root->data);
    while(!q.empty()){
        int s = q.size();
        for(int i =0;i<s;i++){
            BT*f = q.front();
            q.pop();
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
        if(q.size() > 0)ans.push_back(q.back()->data);
    }
    return ans;
}

// recursion / dfs
void dfs(BT*root,int h,vector<int>&ans){
    if(!root)return ;
    if(ans.size() <= h){
        ans.push_back(root->data);
    }
    dfs(root->right,h+1,ans);
    dfs(root->left,h+1,ans);
    return;
}

vector<int> rightView(BT*root){
    if(!root)return {};
    vector<int>ans;
    dfs(root,0,ans);
    return ans;
}

int main(){

    return 0;
}