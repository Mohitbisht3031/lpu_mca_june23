//Longest substring with unique char
#include<bits/stdc++.h>
using namespace std;

int longestSubstr(string str){
    int i = 0;
    int j = 0;
    int maxi = 1;
    vector<int>mp(26,0);
    while(j < str.size()){
        if(mp[str[j] - 'a'] > 0){
            int l = j-i+1;
            maxi = max(maxi,l);
            mp[str[i] - 'a'] = 0;
            i++;
        }
        mp[str[j] - 'a']++;
        j++;
    }
    return maxi;
}


int main(){
    return 0;
}