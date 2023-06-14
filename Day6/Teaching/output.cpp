#include<bits/stdc++.h>

using namespace std;

int i;
class A{
    public:
    ~A(){
        i = 10;
    }
};

int foo(){
    i = 3;
    A a;
    return i;
}
int main(){

    cout<<foo()<<endl;
    cout<<i<<endl;
    return 0;
}