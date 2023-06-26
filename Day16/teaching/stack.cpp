#include<bits/stdc++.h>
using namespace std;

class Lnode{
    public:
    int data;
    Lnode*next;

    Lnode(int data = 0){
        this->data = data;
        this->next = NULL;
    }

};

// vector using vector/array
class Stack{
    public:
    vector<int>v;
    int pos;
    Stack(){
        pos = -1;
    }

    int size(){
        // return v.size();
        return pos+1;
    }

    bool isEmpty(){
        // return (v.size() == 0 ? 1 : 0);
        return (pos == -1 ? 1 : 0);
    }

    void push(int e){
        v.push_back(e);
        pos++;
        return;
    }

    int  pop(){
        if(isEmpty())return -1;
        int e = v.back();
        v.pop_back();
        pos--;
        return e;
    }

    int top(){
        if(isEmpty())return INT_MIN;
        return v[pos];
    }

};

// vector using linkedList
class Stack{
    public:
    int Size;
    Lnode*head;
    Stack(){
        Size = 0;
        head = NULL;
    }

    int size(){
        return Size;
    }

    bool isEmpty(){
        return (Size == 0 ? 1 : 0);
    }

    void push(int e){
        Lnode*n = new Lnode(e);
        if(head){
            n->next = head;
        }
        head = n;
        Size++;
    }

    int  pop(){
        if(isEmpty())return -1;
        Lnode*t = head;
        head = head->next;
        int d = t->data;
        delete t;
        Size--;
        return d;
    }

    int top(){
        if(isEmpty())return -1;
        return head->data;
    }

};

int main(){

    return 0;
}