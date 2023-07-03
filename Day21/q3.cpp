#include<bits/stdc++.h>
using namespace std;

class GT{
    public:
    int data;
    vector<GT*>child;
    GT(int data) : data(data){}
};

// level order traversal / BFS
GT* secondLargest(GT*root){
    if(!root)return root;
    queue<GT*>q;
    q.push(root);
    GT*l = NULL;
    GT*sl = NULL;
    while(!q.empty()){
        GT*f = q.front();
        q.pop();
        if(!l){
            l = f;
        }else{
            if(f->data > l->data){
                sl = l;
                l = f;
            }else if(!sl || f->data > sl->data){
                sl = f;
            }
        }
        for(int i = 0;i<f->child.size();i++){
            q.push(f->child[i]);
        }
    }
    return sl;
}

// recursion / DFS

void dfs(GT*root,GT*&l,GT*&sl){
    if(!root)return ;
    if(!l || root->data > l->data){
        sl =l;
        l = root;
    }else if(!sl || sl->data < root->data){
        sl = root;
    }
    for(int i = 0;i<root->child.size();i++){
        dfs(root->child[i],l,sl);
    }
    return ;
}
GT* secondLargest(GT*root){
    if(!root)return root;
    GT*sl = NULL;
    GT*l = NULL;
    dfs(root,l,sl);
    return sl;
}

int main(){
    return 0;
}