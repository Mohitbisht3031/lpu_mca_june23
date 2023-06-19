#include<bits/stdc++.h>

using namespace std;

class A{
    public:
    A(){
        cout<<"Cons of A"<<endl;// a
    }
    ~A(){
        cout<<"Des of A"<<endl; //b
    }

};

void func(){
    cout<<"in start of func"<<endl; // c
    A *a = new A;
    delete a;
    cout<<"in the end of func"<<endl; //d
}

int main(){
    // cout<<"in start of main"<<endl;//c
    // func();
    A *arr = new A[3];
    delete[] arr;
    // cout<<"in end of main"<<endl;//d
    return 0;
}