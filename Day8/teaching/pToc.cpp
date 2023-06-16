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
};


int main(){
    int time = 330;
    Time t = time;
    // Time t(time);
    t.display();
    return 0;
}