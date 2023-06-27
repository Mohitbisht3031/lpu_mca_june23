#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int>&price){
    vector<int>v(price.size(),1);
    stack<int>stk;
    stk.push(0);
    int i = 1;
    while(i < price.size()){
        while(!stk.empty() && price[stk.top()] < price[i])stk.pop();
        v[i] = (stk.empty() ? i+1 : i - stk.top());
        stk.push(i);
    }

    return v;
}

int main(){

    return 0;
}