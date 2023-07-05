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

vector<int> zigzag(BT*root){
    if(!root)return {};
    vector<int>ans;
    stack<BT*>s1;
    stack<BT*>s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            BT*t = s1.top();
            s1.pop();
            ans.push_back(t->data);
            if(t->left){
                s2.push(t->left);
            }
            if(t->right){
                s2.push(t->right);
            }
        }
        while(!s2.empty()){
            BT*t = s2.top();
            s2.pop();
            ans.push_back(t->data);
            if(t->right){
                s1.push(t->right);
            }
            if(t->left){
                s1.push(t->left);
            }
        }
    }
    return ans;
}

int main(){

    return 0;
}