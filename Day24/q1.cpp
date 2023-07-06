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

class LL{
    public:
    int d;
    LL*next;
    LL(int d){
        this->d = d;
        next = NULL;
    }
};

vector<LL*> makeLL(BT*root){
    if(!root)return {};
    vector<LL*>ans;
    queue<BT*>q;
    q.push(root);
    while(!q.empty()){
        int s = q.size();
        LL*head = new LL(0);
        LL*t = head;
        for(int i = 0;i<s;i++){
            BT*f = q.front();
            q.pop();
            t->next = new LL(f->data);
            t = t->next;
            if(f->left){
                q.push(f->left);
            }
            if(f->right)q.push(f->right);
        }
        ans.push_back(head->next);
    }
    return ans;
}

int main(){

    return 0;
}