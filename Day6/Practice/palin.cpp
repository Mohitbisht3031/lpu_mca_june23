#include<bits/stdc++.h>

using namespace std;
// iterative approach
bool check(string str){
    int s = 0;
    int e = str.size()-1;
    while(s <= e){
        if(str[s] != str[e])return 0;
        s++;
        e--;
    }
    return 1;
}

// recursive approach
bool helper(string str,int s,int e){
    if(s == e)return 1;
    if(str[s] != str[e])return 0;
    return helper(str,s+1,e-1);
}

bool check(string str){
    int s = 0;
    int e = str.size()-1;
    return helper(str,s,e);
}

int main(){
    string str = "";
    cin>>str;
    if(check(str)){
        cout<<"Is palindrome"<<endl;
    }else cout<<"not palindrome"<<endl;
    return 0;
}