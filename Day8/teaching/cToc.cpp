#include<bits/stdc++.h>

using namespace std;

class Matric{
    public:
    int kms;
    int m;

    Matric(int kms,int m): kms(kms),m(m){}

    void display(){
        cout<<kms<<" kilometers and "<<m<<" meters"<<endl;
    }

};


class Imperial{
    public:
    int miles;
    int feets;

    Imperial(int miles,int feets): miles(miles),feets(feets){}

    void display(){
        cout<<miles<<" miles and "<<feets<<" feets"<<endl;
    }

    Imperial(Matric m){
        this->miles = m.kms/1.6;
        this->feets = m.m/0.3;
    }

    operator Matric(){
        return Matric((miles*1.6),(feets*0.3));
    }

};

int main(){

    Imperial i(2,3);
    i.display();
    Matric m = (Matric)i;
    m.display();

    Imperial i2(m);
    i2.display();
    return 0;
}