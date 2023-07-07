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

// level order traversal / BFS
vector<double> averageOfLevels(BT* root) {
    if(!root)return {};
    vector<double>v;
    queue<BT*>q;
    q.push(root);
    while(!q.empty()){
        double sum = 0;
        int s = q.size();
        for(int i = 0;i<s;i++){
            BT*f = q.front();
            q.pop();
            sum+=f->data;
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
        v.push_back(sum/s);
    }
    return v;
}
// using recursion / dfs ??
void dfs(BT*root,vector<pair<double,int>>&v,int h){
    if(!root)return ; 
    if(v.size() == h){
        v.push_back({root->data,1});
    }else{
        v[h].first+=root->data;
        v[h].second++;
    }
    dfs(root->left,v,h+1);
    dfs(root->right,v,h+1);
    return ;
}

vector<double> averageOfLevels(BT* root) {
    if(!root)return {};
    vector<pair<double,int>>v;
    dfs(root,v,0);
    vector<double>ans;
    for(int i = 0;i<v.size();i++){
        ans.push_back((v[i].first / v[i].second));
    }
    return ans;
}


int main(){

    return 0;
}