#include<bits/stdc++.h>
using namespace std;

bool opening(char ch){
   return ( ch == '{' || ch == '(' || ch == '[' );
}

bool check(char ch1,char ch2){
    return ((ch1 =='(' && ch2 == ')') || (ch1 == '{' && ch2 == '}') || (ch1 == '[' && ch2 ==']'));
}

bool isValid(string s) {
    if(s.size() == 0)return 1;
    stack<char>stk;
    for(int i = 0;i<s.size();i++){
        if(opening(s[i])){
            stk.push(s[i]);
        }else{
            if(!stk.empty() && check(stk.top(),s[i]))stk.pop();
            else stk.push(s[i]);
        }
    }        

    return stk.size() == 0;
}

int main(){

    return 0;
}