#include<bits/stdc++.h>

using namespace std;

// single
class A{
    public:
    A(){
        cout<<"cons of class A"<<endl; //CA
    }

    ~A(){
        cout<<"Des of class A"<<endl; //DA
    }

};
class B {
    public:
    B(){
        cout<<"Const of B"<<endl; //CB
    }
    ~B(){
        cout<<"Des of class B"<<endl; // DB
    }
};

class C : public A, public B {
    public:
    C(){
        cout<<"Const of C"<<endl; // CC
    }
    ~C(){
        cout<<"Des of class C"<<endl;//DC
    }
};

int main(){
    C obj;
    return 0;
}