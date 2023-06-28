#include<bits/stdc++.h>
using namespace std;

int extract(string str){
    int i = 0;
    int mul = 1;
    if(str[i] == '-'){
        mul = -1;
        i++;
    }
    int num = 0;
    for(;i<str.size();i++){
        num*=10;
        num+=(str[i] - '0');
    }
    return num*mul;
}

int evalRPN(vector<string>& tokens) {
    stack<int>stk;
    string ops = "+-/*";
    for(string str : tokens){
        if(ops.find(str) != string::npos){
            int e1 = stk.top();
            stk.pop();
            int e2 = stk.top();
            stk.pop();
            if(str == "+"){
                stk.push(e1+e2);
            }else if(str == "-"){
                stk.push(e2-e1);
            }else if(str == "/"){
                stk.push(e2/e1);
            }else{
                stk.push(e1*e2);
            }
        }else{
            int num = extract(str);
            stk.push(num);
        }
    }       
    return stk.top();
}

int main(){

    return 0;
}