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


BST*search(BST*root,int val){
    if(!root)return root;
    if(root->d == val)return root;
    if(root->d >= val)return search(root->left,val);
    else search(root->right,val);

    return NULL;
}


BST*Delete(BST*root,BST*node){
    if(!root)return root;
    if(root == node){
        if(!root->left && !root->right)return NULL;
        else if(!root->right || !root->left){
            return (root->left == NULL ? root->right : root->left);
        }else{
            root->d = root->right->d;
            root->right = Delete(root->right,root->right);
            return root;
        }
    }
    if(root->d < node->d){
        root->right = Delete(root->right,node);
    }else root->left = Delete(root->left,node);

    return root;
}

// DFS / recursion / inorder
void print(BST*root){
    if(!root)return;
    print(root->left);
    cout<<root->d<<endl;
    print(root->right);
    return;
}

// BFS / level order traversal
void print(BST*root){
    if(!root)return ;
    queue<BST*>q;
    q.push(root);
    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            BST*f = q.front();
            q.pop();
            cout<<f->d<<" ";
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
        cout<<endl;
    }
    return ;
}

BST*insert(BST*root,int val){
    if(!root)return new BST(val);
    if(val > root->d)root->right = insert(root->right,val);
    root->left = insert(root->left,val);
    return root;
}

int main(){

    return 0;
}