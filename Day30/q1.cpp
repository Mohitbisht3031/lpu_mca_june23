#include<bits/stdc++.h>
using namespace std;

class BT{
    public:
    int val;
    BT*left;
    BT*right;
    BT(int d){
        this->val = d;
    }
};

int maxWidth(BT*root){
    if(!root)return -1;
    queue<pair<BT*,int>>q;
    q.push({root,0});
    int maxi = 0;

    while(!q.empty()){
        int s = q.size();
        int w =q.back().second - q.front().second +1;
        maxi = max(maxi,w);
        for(int i = 0;i<s;i++){
            pair<BT*,int>f = q.front();
            q.pop();
            if(f.first->left){
                q.push({f.first->left,(2* f.second )+1});
            }
            if(f.first->right){
                q.push({f.first->right,(2*f.second)+2});
            }
        }
    }

    return maxi;
}

int main(){

    return 0;
}