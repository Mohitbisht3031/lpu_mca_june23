#include<bits/stdc++.h>
using namespace std;

// int sum2(int a,int b){
//     return a+b;
// }

// int sum3(int a,int b,int c){
//     return a+b;
// }

// int sum4(int a,int b,int c,int d){
//     return a+b;
// }

// int sum5(int a,int b,int c,int d,int e){
//     return a+b;
// }
// default parameters
int sum(int a = 0,int b = 0,int c = 0,int d = 0,int e = 0){
    return a+b+c+d+e;
}

// function overlaoding
// -> functions with same name
//    -> having different no. of args
//    -> having different type of args
//    -> both

int max(int a,int b){
    return (a > b ? a : b);
}

int max(double a,double b){
    return (a > b ? a : b);
}


int max(int a,int b,int c){
    // 1st
//     if(a > b){
//         if(a > c)return a;
//         else return c;
//     }else if(b > a){
//         if(b > c)return b;
//         else return c;
//     }else if(c > a){
//         if(c > b)return c;
//         else return b;
//     }

// // 2nd
//     return (a > b ? (a>c ? a : c) : (b > c ? b : c));

// 3rd
    return max(max(a,b),c);
}

int max(int a,int b,int c,int d){
    return max(max(a,b,c), d);
}


//call by value
// void increment(int a){
//     a++;
// }

//call by address
void increment(int*a){
    *a++;
}

void increment(int&a){
    a++;
}

int main(){
    int  i =10;
    increment(i); // 11
    cout<<i<<endl; 
    // cout<<"sum is "<<sum()<<endl;
    // cout<<"sum of 2 num is"<<sum(10,20)<<endl;
    return 0;
}