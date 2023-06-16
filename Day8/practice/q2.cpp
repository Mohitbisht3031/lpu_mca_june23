#include<bits/stdc++.h>

using namespace std;

string reverseWords(string sentence){
    string ans = "";
    string word = "";
    for(int i = 0;i<sentence.size();i++){
        if(sentence[i] == ' '){
            reverse(word.begin(),word.end());
            ans+=' '+word;
            word ="";
        }
    }
    // word == ?
    reverse(word.begin(),word.end());
    ans+=' '+word;
    return ans.substr(1);
}

int main(){
    return 0;
}