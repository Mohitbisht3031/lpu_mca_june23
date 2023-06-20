#include<bits/stdc++.h>

using namespace std;

template <class T1,class T2>
class Calculate{
    public:
    T1 a;
    T2 b;
    Calculate(T1 a,T2 b){
        this->a = a;
        this->b = b;
    }
    T1 add(){
        return a+b;
    }
    T1 minus(){
        return abs(a-b);
    }

    T1 multiply(){
        return a*b;
    }
};

int main(){
    Calculate<int,int>c(2,3);
    Calculate<int,double>c2(2,3.3);
    
    return 0;
}