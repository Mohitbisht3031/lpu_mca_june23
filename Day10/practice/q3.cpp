//https://leetcode.com/problems/consecutive-characters/
#include<bits/stdc++.h>

using namespace std;
// iterative 
int maxPower(string s) {
    int maxi = 1;
    int i = 0;
    int j = 1;
    while(j < s.size()){
        if(s[i] != s[j]){
            maxi = max(maxi,(j-i));
            i = j;
        }
        maxi = max(maxi , j-i);
        j++;
    }       
    // maxi = max(maxi,(j-i));
    return maxi; 
}

// recursive 
void helper(string&s,int i,int c,int&maxi){
    if(i >= s.size())return;
    if(s[i] == s[i-1]){
        c++;
    }else{
        c = 1;
    }
    maxi = max(maxi,c);
    helper(s,i+1,c,maxi);
}

int maxPower(string s) {
    int maxi = 1;
    int c = 1;
    helper(s,1,c,maxi);
    return maxi; 
}

int main(){

    return 0;
}