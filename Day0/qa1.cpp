//Verify a given num is odd or even ? 

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cin>>num;

    // if(num%2){ 1
    //     cout<<"Odd num"<<endl;
    // }else cout<<"even num"<<endl;

    // if(num&1){ 2
    //     cout<<"odd num"<<endl;
    // }else cout<<"even num"<<endl;

    ((num&1) == 0 ? cout<<"even num"<<endl : cout<<"odd num"<<endl);

    return 0;
}