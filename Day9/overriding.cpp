#include<bits/stdc++.h>

using namespace std;

class Animal{
    public:
    virtual void speak(){
        cout<<"Made sound"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"woofff wofff"<<endl;
    }
};

class Cat : public Animal{
    public:
    void speak(){
        cout<<"Meaww"<<endl;
    }
};

int main(){
    // new dynamic memory allocation 
    Animal*obj = new Dog;
    obj->speak();
    return 0;
}