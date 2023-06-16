#include<bits/stdc++.h>

using namespace std;

string toLowerCase(string s) {
    string ans = "";
    for(int i = 0;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            ans+=(s[i]+32);
        }else ans+=s[i];
    }    
    return ans;
}

string toLowerCase(string s) {
    // string ans = "";
    for(int i = 0;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = (s[i]+32);
        }
    }    
    return s;
}

string toLowerCase(string s) {
    // string ans = "";
    for(int i = 0;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = tolower(s[i]);
        }
    }    
    return s;
}


int main(){
    return 0;
}