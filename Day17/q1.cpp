#include<bits/stdc++.h>
using namespace std;


// pop function is taking O(n) estra sapce and time
class MinStack {
public:
    stack<int>stk;
    int mini = INT_MAX;

    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        mini = (mini >= val ? val : mini);
    }
    
    void pop() {
        int e = stk.top();
        stk.pop();
        if(mini == e){
            stack<int>ns;
            int nmini = INT_MAX;
            while(!stk.empty()){
                nmini = min(nmini,stk.top());
                ns.push(stk.top());
                stk.pop();
            }
            mini = nmini;
            while(!ns.empty()){
                stk.push(ns.top());
                ns.pop();
            }
        }
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return mini;
    }
};

// contant time min stack
class MinStack {
public:
    stack<int>stk;
    int mini = INT_MAX;

    MinStack() {
        
    }
    
    void push(int val) {
        if(val <= mini){
            stk.push(mini);
            mini = val;
        }
        stk.push(val);
    }
    
    void pop() {
        if(stk.top() == mini){
            stk.pop();
            mini = stk.top();
        }
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return mini;
    }
};

int main(){

    return 0;
}