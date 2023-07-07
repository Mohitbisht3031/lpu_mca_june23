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

bool dfs(BT*r1,BT*r2){
    if(!r1 || !r2){
        return r1 == r2;
    }
    if(r1->data != r2->data)return 0;
    return dfs(r1->left , r2->right) && dfs(r1->right,r2->left);
}

bool isSymmetric(BT* root) {
    if(!root)return 1;
    return dfs(root->left,root->right);
}

// level order traversal
bool isSymmetric(BT* root) {
    if(!root)return 1;
    queue<BT*>q1;
    queue<BT*>q2;
    q1.push(root->left);
    q2.push(root->right);
    while(!q1.empty() && (q1.size() == q2.size())){
        int s = q1.size();
        for(int i = 0;i<s;i++){
            BT*f1 = q1.front();
            q1.pop();
            BT*f2 = q2.front();
            q2.pop();
            if(f1->data != f2->data)return 0;
            if(f1->left)q1.push(f1->left);
            if(f1->right)q1.push(f1->right);
            if(f2->right)q2.push(f2->right);
            if(f2->left)q2.push(f2->left);
        }
    }

    return 1;
}

int main(){

    return 0;
}