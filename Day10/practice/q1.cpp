#include<bits/stdc++.h>

using namespace std;

// brute force approach
void helper(vector<vector<int>>&v,int i,int j){
    for(int k = 0;k<v[0].size();k++){
        v[i][k] = 0;
    }

    for(int k = 0;k<v.size();k++){
        v[k][j] = 0;
    }

    return;
}

void convert(vector<vector<int>>&mat){
    vector<vector<int>>v(mat.size(),vector<int>(mat[0].size(),-1));
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(mat[i][j] == 0){
                helper(v,i,j);
            }
        }
    }

    for(int i = 0;i<v.size();i++){
        for(int j = 0 ;j<v[0].size();j++){
            if(v[i][j] == -1){
                v[i][j] = mat[i][j];
            }
        }
    }

    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[0].size();j++){
            mat[i][j] = v[i][j];
        }
    }

    return;
}


// optimized
void convert(vector<vector<int>>&mat){
    vector<int>row(mat.size(),-1);
    vector<int>col(mat[0].size(),-1);

    for(int i = 0 ;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(mat[i][j] == 0){
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    for(int i = 0;i<mat.size();i++){
        for(int j = 0 ;j<mat[0].size();j++){
            if(row[i] == 0 || col[j] == 0){
                mat[i][j] = 0;
            }
        }
    }

    return;
}

int main(){
    return 0;
}