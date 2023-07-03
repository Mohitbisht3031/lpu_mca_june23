#include<bits/stdc++.h>
using namespace std;

class GT{
    public:
    int data;
    vector<GT*>child;
    GT(int data) : data(data){}
};

// BFS / level order traversal
bool identical(GT*r1,GT*r2){
    if(!r1 || !r2)return 0;
    queue<GT*>q1;
    queue<GT*>q2;
    q1.push(r1);
    q2.push(r2);
    while(!q1.empty() && !q2.empty()){
        GT*f1 = q1.front();
        q1.pop();
        GT*f2 = q2.front();
        q2.pop();
        if(f1->data != f2->data)return 0;
        for(int i = 0 ;i < f1->child.size();i++){
            q1.push(f1->child[i]);
        }
        
        for(int i = 0 ;i < f2->child.size();i++){
            q2.push(f2->child[i]);
        }
    }

    return (q1.empty() ? (q2.empty() ? 1 : 0) : 0);
}

// DFS // recursion
bool identical(GT*r1,GT*r2){
    if(!r1 || !r2)return r1 == r2;
    if(r1->data != r2->data)return 0;
    bool ans = 0;
    if(r1->child.size() == r2->child.size()){
        for(int i = 0;i<r1->child.size();i++){
            ans = ans && identical(r1->child[i],r2->child[i]);
        }
    }
    return ans;
}

int main(){
    return 0;
}