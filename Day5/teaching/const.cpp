#include<bits/stdc++.h>

using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(){

    }

// paramatrize const
    Person(string n,int a){
        name = n;
        age = a;
    }

    Person(string n){
        name =n;
    }

    void intro(){
        cout<<"My name is "<<name<<" my age is "<<age<<endl;
    }

};

int main(){
    Person p("Mohit",10);
    Person p2 = p;
    p2.intro();
    // p.init("Mohit",10);
    // p.intro();
    return 0;
}