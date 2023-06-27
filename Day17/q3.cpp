#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>&stk,int t){
    if(stk.empty() || stk.top() <= t){
        stk.push(t);
        return;
    }
    int v = stk.top();
    stk.pop();
    insert(stk,t);
    stk.push(v);
    return;
}

void sortStack(stack<int>&stk){
    if(stk.size() == 0 || stk.size() == 1)return;

    int t = stk.top();
    stk.pop();
    sortStack(stk);
    insert(stk,t);
    return ;
}

int main(){

    return 0;
}