#include<bits/stdc++.h>

using namespace std;

bool canThreePartsEqualSum(vector<int>& arr) {
    if(arr.size() < 3)return 0;
    int s = accumulate(arr.begin(),arr.end(),0);
    s/=3;  
    int ps = 0;
    int ss = 0;
    int i = 0;
    int j = arr.size()-1;
    while(i < j){
        if(ps == s && ss == s)break;
        if(ps < s){ps+=arr[i];
        i++;}
        if(ss < s){ss+=arr[j];
        j--;}
    }     
    if(ps == s && ss == s){
        return (j-i >= 0);
    } 
    return 0;
}

int main(){

    return 0;
}