#include<bits/stdc++.h>
using namespace std;

class GT{
    public:
    int data;
    vector<GT*>child;
    GT(int data) : data(data){}
};

// level wise / bfs
GT* transform(GT*root){
    if(!root)return root;
    queue<GT*>q;
    q.push(root);
    int l = 1;
    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            GT*f = q.front();
            q.pop();
            f->data = l;
            for(int j = 0;j<f->child.size();j++){
                q.push(f->child[i]);
            }
        }
        l++;
    }

    return root;
}

// recursion

void dfs(GT*root,int h){
    if(!root)return ;
    root->data = h;
    for(int i = 0;i<root->child.size();i++)dfs(root->child[i],h+1);
    return ;
}

GT* transform(GT*root){
    if(!root)return root;
    dfs(root,1);
    return root;
}

int main(){
    return 0;
}