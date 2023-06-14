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
};

int main(){
    Person p("Mohit",10);
    Person*po = &p;
    int a = 10;
    int*pi = &a;
    // if(sizeof(pi) == sizeof(po)){
    //     cout<<"Same"<<endl;
    // }else cout<<"Not same"<<endl;

    cout<<p.name<<" "<<p.age<<endl;
    // cout<<po->name<<" "<<po->age<<endl;
    // cout<<(*po).name<<" "<<(*po).age<<endl;

    return 0;
}