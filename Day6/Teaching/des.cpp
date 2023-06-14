#include<bits/stdc++.h>

using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(){
    }
    // Person(string name,int age){
    //     this->name = name;
    //     this->age = age;
    // }
    Person(string n,int a) : name(n) , age(a){
    }

    ~Person(){
        cout<<"Destrustor called"<<endl;
    }

};

int main(){
    cout<<"in the start of main"<<endl;
    Person p("Mohit",10);
    cout<<"in the end of main"<<endl;
    return 0;
}