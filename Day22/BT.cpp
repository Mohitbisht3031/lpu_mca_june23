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

// level wise
void print(BT*root){
    if(!root)return;
    queue<BT*>q;
    q.push(root);
    while(!q.empty()){
        BT*f = q.front();
        q.pop();
        cout<<f->data<<" : ";
        if(root->left){
            cout<<root->left->data<<" ,";
            q.push(root->left);
        }
        if(root->right){
            cout<<root->right->data;
            q.push(root->right);
        }
        cout<<endl;
    }
    return ;
}

// inorder LDR
void inorder(BT*root){
    if(!root)return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
    return;
}

// pre order DLR
void preOrder(BT*root){
    if(!root)return;
    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
    return;
}

// post order LRD
void postOrder(BT*root){
    if(!root)return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data;
    return;
}

//non level wise
void print(BT*root){
    if(!root)return;
    cout<<root->data<<" : ";
    if(root->left){
        cout<<root->left->data<<" ,";
    }
    if(root->right){
        cout<<root->right;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
    return ;
}

// level wise
BT*make(){
    int d;
    cin>>d;
    if(d == -1)return NULL;
    BT*root = new BT(d);
    queue<BT*>q;
    q.push(root);
    while(!q.empty()){
        BT*f = q.front();
        q.pop();
        int lc;
        int rc;
        cout<<"data to be inserted in left child of "<<f<<endl;
        cin>>lc;
        cout<<"data to be inserted in right child of "<<f<<endl;
        cin>>rc;
        if(lc!=-1){
            f->left = new BT(lc);
            q.push(f->left);
        }
        if(rc!=-1){
            f->right = new BT(rc);
            q.push(f->right);
        }
    }
    return root;
}

// non level wise
BT*make(){
    int d;
    cin>>d;
    BT*root = new BT(d);
    cout<<"enter the data of left child of "<<d<<endl;
    root->left = make();
    cout<<"enter the data of right child of "<<d<<endl;
    root->right = make();
    return root;
}

int main(){
    BT*root = make();

    return 0;
}