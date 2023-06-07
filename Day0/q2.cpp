//Write a program to swap two numbers.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

//approach 1

    a+=b;
    b = a - b;
    a = a- b;

    cout<<a<<" "<<b<<endl;

//approach 2

    a = a^b;
    b = a^b;
    a = a^b;

//approach 3

    swap(a,b);

    return 0;
}