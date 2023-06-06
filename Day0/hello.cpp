#include<bits/stdc++.h>
using namespace std;

int main(){

    int year;
    cin>>year;
    if(year%400 == 0){
        cout<<"Leap year"<<endl;
    }else if(year%100 == 0){
        cout<<"Leap year"<<endl;
    }else if(year %4 == 0)cout<<"Leap year"<<endl;
    else cout<<"Not leap year"<<endl;

    // cout<<"hello all"<<endl;

    return 0;
}