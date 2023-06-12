#include<bits/stdc++.h>

using namespace std;

class Person{
    public:
    string name;
    private:
    int age;

    public:
    int setAge(int a){
        age = a;
    }
    int getAge(){
        return age;
    }

};

int main(){
    Person p;
    p.name = "Mohit";
    p.setAge(10);
    cout<<p.getAge()<<endl;
    return 0;
}