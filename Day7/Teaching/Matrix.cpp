#include<bits/stdc++.h>

using namespace std;

class Matrix{
    vector<vector<int>>v;
    public:
    Matrix(int val = 0){
        v = vector<vector<int>>(10,vector<int>(10,val));
    }

    Matrix operator +(Matrix m){
        Matrix m3;
        for(int i =0;i<v.size();i++){
            for(int j= 0;j<v[0].size();j++){
                m3.v[i][j] = this->v[i][j]+m.v[i][j];
            }
        }
        // m3.display();
        return m3;
    }

    void display(){
        for(int i = 0;i<v.size();i++){
            for(int j = 0;j<v[0].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }

};
int main(){
    // vector<int>v(10,1);
    // vector<vector<int>>v(10,vector<int>(2,1));
    Matrix m1(1),m2(2);
    m1.display();
    cout<<endl;
    m2.display();
    Matrix m3 = m1+m2;
    m3.display();
    return 0;
}