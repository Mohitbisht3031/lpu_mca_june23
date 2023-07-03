#include<bits/stdc++.h>
using namespace std;

class GT{
    public:
    int data;
    vector<GT*>child;
    GT(int data) : data(data){}
};

// level wise
void print(GT*root){
    queue<GT*>q;
    q.push(root);
    while(!q.empty()){
        GT*f = q.front();
        q.pop();
        cout<<f->data<<" :";
        for(int i = 0;i<f->child.size();i++){
            cout<<f->child[i]->data<<" ,";
            q.push(f->child[i]);
        }
        cout<<endl;
    }
    return ;
}

// non level wise printing / recursion / dfs
void print(GT*root){
    cout<<root->data<<" : ";
    for(int i = 0;i<root->child.size();i++){
        cout<<root->child[i]->data<<" , ";
    }
    for(int i = 0;i<root->child.size();i++)print(root->child[i]);

    return ;
}

// not level wise
GT* make(){
    int rd;
    cout<<"Enter root data"<<endl;
    cin>>rd;
    GT*root = new GT(rd);
    int n;
    cout<<"no. of child"<<root->data<<" is having"<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        GT*cr = make();
        root->child.push_back(cr);
    }

    return root;
}

// level wise
GT* make(){
    queue<GT*>q;
    int rd;
    cout<<"enter root data"<<endl;
    cin>>rd;
    GT*root = new GT(rd);
    q.push(root);
    while(!q.empty()){
        GT*f = q.front();
        q.pop();
        int n;
        cout<<"enter no. of child this "<<f->data<<" node have"<<endl;
        cin>>n;
        for(int i = 0;i<n;i++){
            int d;
            cin>>d;
            GT*node = new GT(d);
            f->child.push_back(node);
            q.push(node);
        }
    }

    return root;
}

int main(){
    GT*root = make();
    print(root);
    return 0;
}