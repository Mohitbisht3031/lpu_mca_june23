#include<bits/stdc++.h>
using namespace std;

// queue using vector
class Queue{
    vector<int>v;
    int FirstInd;
    public:
    Queue(){
        FirstInd = -1;
    }

    void push(int e){
        if(FirstInd == -1){
            FirstInd++;
        }
        v.push_back(e);
    }

    int front(){
        if(FirstInd == -1 || FirstInd >= v.size())return -1;
        return v[FirstInd];
    }

    int size(){
        return v.size();
    }

    bool isEmpty(){
        return v.size() == 0;
    }

    int pop(){
        if(FirstInd == -1 || FirstInd >= v.size())return -1;
        int e = v[FirstInd];
        FirstInd++;
        return e;
    }

};

class Lnode{
    public:
    int data;
    Lnode*next;
    Lnode(int data){
        this->data = data;
        this->next = NULL;
    }
};

// queue using LL
class Queue{
    Lnode*head;
    Lnode*tail;
    int size;
    public:
    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push(int e){
        if(!head){
            head = new Lnode(e);
            tail = head;
        }else{
            tail->next = new Lnode(e);
            tail = tail->next;
        }
        size++;
    }

    int front(){
        if(!head)return -1;
        return head->data;
    }

    int size(){
        return size;
    }

    bool isEmpty(){
        // return size == 0
        return head == NULL;
    }

    int pop(){
        if(!head)return -1;
        Lnode*t = head;
        int e = t->data;
        head = head->next;
        delete t;
        size--;
        return e;
    }
};

// queue using 2 satcks
class Queue{
    stack<int>s1;
    stack<int>s2;
    public:
    Queue(){
    }

    void push(int e){
        s1.push(e);
    }

    int front(){
        if(s1.empty())return -1;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int t = s2.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return t;
    }

    int size(){
        return s1.size();
    }

    bool isEmpty(){
        return s1.size() == 0;
    }

    int pop(){
        if(s1.empty())return -1;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int t = s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return t;
    }
};

int main(){

    return 0;
}