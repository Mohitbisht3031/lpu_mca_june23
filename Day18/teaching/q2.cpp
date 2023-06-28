#include<bits/stdc++.h>
using namespace std;
// mini number of reverse opt. to make our string balance
// {{{}}} => 0
// {{{}{} => 1
// }{{}{} => 2
int minRevert(string exp){
    stack<char>stk;
    for(char ch : exp){
        if(ch == '{'){
            stk.push(ch);
        }else{
            if(!stk.empty() && stk.top() == '{')stk.pop();
            else stk.push(ch);
        }
    }

    int c =0;
    if(!stk.empty()){
        while(!stk.empty()){
            char ch1 = stk.top();
            stk.pop();
            char ch2 = stk.top();
            stk.pop();
            if(ch1 == ch2)c++;
            else c+=2;
        }
    }

    return c;
}

int main(){

    return 0;
}