#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 10;
    int* pi1 = &a;
    int** pi2 = &pi1;
    int*** pi3 = &pi2;
   short ch = 1;
   short* pic = &ch;
    // int arr[] = {0,1,2,3};
    // cout<<arr+1<<" "<<*(arr+1)<<endl;

    // string str = "abc";
    char arr[] = {'a','b','c','\0'};
    cout<<arr<<" "<<*arr<<endl;

    // pi1 = 0;
    // cout<<pi1<<" "<<pi1+1<<endl;// pi1 + 1*sizeof(int)
    // cout<<pic<<" "<<pic+1<<endl; // pic + 1*sizeof(short)
    // cout<<pi1<<endl; //-> add of a
    // cout<<*pi1<<endl; // -> val of a

    // cout<<pi2<<endl; // -> add of pi1
    // cout<<*pi2<<endl;// -> add of a
    // cout<<**pi2<<endl; // -> val of a

    // cout<<pi3<<endl; // -> add of pi2
    // cout<<*pi3<<endl;// -> add of pi1
    // cout<<**pi3<<endl;// -> add of a
    // cout<<***pi3<<endl;// -> val of a

    return 0;
}