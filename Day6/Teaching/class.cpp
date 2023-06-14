#include<bits/stdc++.h>

using namespace std;
class A{
    int a;
    public:
    A(){
        cout<<"d"<<endl;
    }
    A(A&a){
        cout<<"c"<<endl;
    }
};

class B{
    A a;
    public:
    B(){
        cout<<"B's D"<<endl;
    }
};

int main(){
    B b1;
    B b2;
    return 0;
}