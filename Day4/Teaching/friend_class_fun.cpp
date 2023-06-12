#include<bits/stdc++.h>

using namespace std;

class Guy{
    public:
    string name;
    int age;

    private:
    string salary;
    public: 
    void init(string n,int a,string s){
        name = n;
        age = a;
        salary = s;
    }
    friend class Girlfriend;
    friend void bestfriend(Guy g);
};

void bestfriend(Guy g){
    cout<<"name is : "<<g.name<<" age is: "<<g.age<<" salary is : "<<g.salary<<endl;
    
    }

class Girlfriend{
    public:
    void display(Guy g){
        cout<<"Name is : "<<g.name<<" his age is : "<<g.age<<" salary is :"<< g.salary<<endl;
    }
};

int main(){
    Guy g;
    g.init("MOhit",10,"1000");
    bestfriend(g);
    // Girlfriend gf;
    // gf.display(g);

    return 0;
}