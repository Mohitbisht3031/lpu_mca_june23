//https://leetcode.com/problems/consecutive-characters/
#include<bits/stdc++.h>

using namespace std;

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

int main(){

    return 0;
}