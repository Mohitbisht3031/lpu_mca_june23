#include<bits/stdc++.h>
using namespace std;

class BT{
    public:
    int data;
    BT*left;
    BT*right;
    BT*next;
    BT(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void connectNext(BT*root){
    if(!root)return ;
    queue<BT*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            BT*f = q.front();
            q.pop();
            if(f == NULL)break;
            f->next = q.front();
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
        if(q.size()> 0)q.push(NULL);
    }
    return;
}

int main(){

    return 0;
}