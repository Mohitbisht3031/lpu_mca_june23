#include<bits/stdc++.h>

using namespace std;

// approach 1 (brute force approach)
int degree(vector<int>&v){
    int maxi = 0;
    for(int i = 0;i<v.size();i++){
        int c = 0;
        for(int j = 0;j<v.size();j++){
            if(v[i] == v[j])c++;
        }
        maxi = max(maxi,c);
    }
    return maxi;
}

// approach 2
int degree(vector<int>&v){
    int maxi  = 0 ;
    for(int i = 0;i<v.size();i++){
        int j = i;
        while(j < v.size() && v[i] == v[j])j++;
        maxi = max(maxi, j-i);
        i = j-1;
    }
    return maxi;
}

//aproach 3
int degree(vector<int>&v){
    int maxi  = 0 ;
    
    vector<int>freq(50000,0);
    for(int i = 0;i<v.size();i++){
        freq[v[i]]++;
    }

    for(int i = 0;i<freq.size();i++){
        maxi = max(maxi,freq[i]);
    }
    
    return maxi;
}


int main(){
    return 0;
}