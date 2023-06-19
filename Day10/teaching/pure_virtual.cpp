#include<bits/stdc++.h>

using namespace std;

// Abstract class
class A{
    public:
    A(){
        cout<<"Cons of A"<<endl;// a
    }

    virtual void func() = 0;

    ~A(){
        cout<<"Des of A"<<endl; //b
    }

};

// concered class
class B:public A{
    public:
    void func(){
        cout<<"a func in b"<<endl;
    }
};


int main(){

    A*ptr = new B;
    ptr->func();
    return 0;
}