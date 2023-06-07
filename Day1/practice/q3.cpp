// Write a program to find the reverse of a number.
#include<bits/stdc++.h>

using namespace std;

// iterative 
void printReverse(int n){
    while(n > 0){
        cout<<n%10;
        n/=10;
    }
    cout<<endl;
}

// recursive 
void printReverse(int n){
    if(n >= 0 && n <= 9){
        cout<<n;
        return;
    }

    cout<<n%10;
    printReverse(n/10);
}

int main(){
    return 0;
}