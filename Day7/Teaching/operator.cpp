#include<bits/stdc++.h>

using namespace std;

class Complex{
    int real;
    int img;
    public:
    Complex(int real,int img) : real(real),img(img){}

    Complex add(Complex c){
        int real = this->real+c.real;
        int img = this->img+c.img;
        return Complex(real,img);
    }

    Complex operator +(Complex c){
        int real = this->real+c.real;
        int img = this->img+c.img;
        return Complex(real,img);
    }

    void display(){
        cout<<real<<"+i"<<img<<endl;
    }

    void operator ++(){
        this->real++;
    }


};

int main(){
    Complex c1(5,6);
    Complex c2(2,-3);

    // Complex c3 = c1.add(c2);
    Complex c3 = c1+c2; 
    // c1.+(c2)
    c3.display();
    ++c1;
    c1.display();
    // c1+c2/c3
    // c1+c2+c3
    return 0;
}