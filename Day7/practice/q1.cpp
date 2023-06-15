#include<bits/stdc++.h>

using namespace std;

string addStrings(string num1, string num2) {
    int i = num1.size()-1;
    int j = num2.size()-1;
    int c = 0;
    string ans = "";

    while(i >= 0 && j >= 0){
        int d1 = num1[i] - '0';
        int d2 = num2[j] - '0';
        int s = d1+d2+c;
        c = s/10;
        ans+=('0'+(s%10));
        i--;
        j--;
    }

    while(i >= 0){
        int d = (num1[i] - '0')+c;
        c = d/10;
        ans+=('0' + d%10);
        i--;
    }

    while(j >= 0){
        int d = (num2[j] - '0')+c;
        c = d/10;
        ans+=('0' + d%10);
        j--;
    }

    if(c != 0){
        ans+=('0'+c);
    }

    reverse(ans.begin() , ans.end());

    return ans;
}

int main(){
    return 0;
}