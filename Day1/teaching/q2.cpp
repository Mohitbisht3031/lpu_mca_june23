// find a raise to b

#include<bits/stdc++.h>
using namespace std;
// recursion
// 1st base case;
// 2nd recurive call
// 3rd samll operation
// 2 <=> 3

// iterative
// int power(int a,int b){
//     for(int i = 1;i<b;i++){
//         a*=a;
//     }
//     return a;
// }

// resursion
int power(int a,int b){
    // base case
    if(b == 0)return 1;

    // recursive call
    int smlAns = power(a,b-1);

    return (smlAns*a);
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    return 0;
}