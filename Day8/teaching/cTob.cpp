#include<bits/stdc++.h>

using namespace std;

class Time{
    public:
    int hours;
    int mins;

    //method 1
    Time(int t){
        hours = t/60;
        mins = t%60;
    }

    //method2
    Time operator =(int t){
        hours = t/60;
        mins = t%60;
    }

    void display(){
        cout<<"time is  "<<hours<<":"<<mins<<endl;
    }

    operator int(){
        return (hours*60)+mins;
    }

};


int main(){
    Time t(330);

    cout<<"time in mins is "<<(int)t<<endl;

    return 0;
}