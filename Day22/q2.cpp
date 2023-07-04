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

vector<double> average(BT*root){
    if(!root)return {};
    vector<double>v;
    queue<BT*>q;
    q.push(root);
    while (!q.empty())
    {
        double sum = 0;
        int s = q.size();
        for(int i = 0;i<s;i++){
            BT*f = q.front();
            q.pop();
            sum+=(f->data);
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
        v.push_back((sum/s));
    }
    return v;
}

int main(){

    return 0;
}