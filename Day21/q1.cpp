#include<bits/stdc++.h>
using namespace std;

class GT{
    public:
    int data;
    vector<GT*>child;
    GT(int data) : data(data){}
};

// level order traversal / bfs
GT* nextGreater(GT*root,int k){
    if(!root)return NULL;
    queue<GT*>q;
    q.push(root);
    GT*ans = NULL;
    while(!q.empty()){
        GT*f = q.front();
        q.pop();
        if(f->data > k && (!ans || ans->data > f->data)){
            ans = f;
        }
        for(int i = 0;i<f->child.size();i++){
            q.push(f->child[i]);
        }
    }

    return ans;
}

// dfs / recursion

void dfs(GT*root,GT*&ans,int k){
    if(!root)return ;
    if(root->data > k && (!ans || ans->data > root->data)){
        ans = root;
    }
    for(int i = 0;i<root->child.size();i++){
        dfs(root->child[i],ans,k);
    }
    return;
}

GT* nextGreater(GT*root,int k){
    if(!root)return root;
    GT*ans = NULL;
    dfs(root,ans,k);
    return ans;
}

int main(){
    return 0;
}