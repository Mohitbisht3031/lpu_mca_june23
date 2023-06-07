// Find the factorial of a number
#include<bits/stdc++.h>
using namespace std;

// iterative
int fact(int n){
    int p =1;
    for(int i = 2;i<=n;i++){
        p*=i;
    }
    return p;
}

// recursive
int fact(int n){
    // base case
    if(n == 1)return n;

    // recursive call
    int ans = fact(n-1);
    return ans*n;
}

int main(){
    return 0;
}