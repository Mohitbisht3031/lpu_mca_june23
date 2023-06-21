#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};

    for(vector<int>::iterator itr = v.begin();itr!= v.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    for(vector<int>::reverse_iterator itr = v.rbegin();itr!= v.rend();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    return 0;
}