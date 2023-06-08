#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 10;
    int*pi = &a;
    char ch = 'a';
    char*pc = &ch;

    if(sizeof(pi) == sizeof(pc)){
        cout<<"same"<<endl;
    }else cout<<"not same"<<endl;

    return 0;
}