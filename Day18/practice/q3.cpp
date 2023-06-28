#include<bits/stdc++.h>
using namespace std;

// implement the stack using 2 queue
class Stack{
    queue<int>q1;
    queue<int>q2;
    public:
    void push(int e){
        q1.push(e);
    }

    int top(){
        return q1.back();
        // int s = q1.size();
        // for(int i = 0;i<s-1;i++){
        //     q2.push(q1.front());
        //     q1.pop();
        // }
        // int v = q1.front();
        // q1.pop();
        // while(!q2.empty()){
        //     q1.push(q2.front());
        //     q2.pop();
        // }
        // q1.push(v);
        // return v;
    }

    int size(){
        return q1.size();
    }

    bool isEmpty(){
        return q1.size() == 0;
    }

    int pop(){
        int s = q1.size();
        for(int i = 0;i<s-1;i++){
            q2.push(q1.front());
            q1.pop();
        }
        int v = q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        // q1.push(v);
        return v;
    }

};

int main(){

    return 0;
}