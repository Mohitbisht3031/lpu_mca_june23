#include<bits/stdc++.h>
using namespace std;
// implement the stack using single queue
class Stack{
    queue<int>q1;
    public:
    void push(int e){
        q1.push(e);
    }

    int top(){
        return q1.back();
    }

    int size(){
        return q1.size();
    }

    bool isEmpty(){
        return q1.size() == 0;
    }

    int pop(){
        int size = q1.size();
        for(int i = 0;i<size-1;i++){
            q1.push(q1.front());
            q1.pop();
        }
        int v = q1.front();
        q1.pop();
        return v;
    }

};

int main(){

    return 0;
}