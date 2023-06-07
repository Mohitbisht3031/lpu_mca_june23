// Can you find out the sum of digits of a number?
#include<bits/stdc++.h>

using namespace std;

// iterative approach
int sumOfDigit(int n){
    int ans = 0;
    while(n > 0){
        ans+=(n%10);
        n/=10;
    }
    return ans;
}

// recursive
int sumOfDigit(int n){
    // ->base case
    // -> resursive call
    // -> small cal. 2 <=> 3
    if(n >= 0 && n <= 9)return n;
    int ans = sumOfDigit(n/10);
    return ans+(n%10);
}

int main(){
    return 0;
}