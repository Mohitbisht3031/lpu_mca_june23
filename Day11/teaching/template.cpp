#include<bits/stdc++.h>

using namespace std;

/*
double func(vector<double>&v){
    double s = 0;
    for(double e:v){
        s+=e;
    }
    return s;
}

float func(vector<float>&v){
    float s = 0;
    for(float e:v){
        s+=e;
    }
    return s;
}*/

// function templates
template <class T>
T func(vector<T>&v,T def = 0){
    T s = def;
    for(T e:v){
        s+=e;
    }
    return s;
}

int main(){
    vector<int> v1 = {1,2,3,4,5,6,7,8,9};
    vector<double> v2 = {1.5,2.2,3.1,4.12,5.25,6.6,7.56,8.12,9.34};
    vector<string> v3 = {"My "," Name"," is"," Mohit"};
    cout<<func<int>(v1)<<endl;
    cout<<func<double>(v2)<<endl;
    cout<<func<string>(v3,"")<<endl;
    return 0;
}