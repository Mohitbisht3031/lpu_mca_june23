#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l ;

    l.push_back(10);
    l.push_back(20);
    l.push_front(30);

    for(list<int>::iterator itr = l.begin();itr != l.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    cout<<l.size()<<endl;
    l.pop_front();
    l.pop_back();

    l.push_front(20);
    l.push_back(30);
    
    for(list<int>::iterator itr = l.begin();itr != l.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    // sort(v.begin(),v.end());
    l.sort();

    for(list<int>::iterator itr = l.begin();itr != l.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    l.reverse();

    for(list<int>::iterator itr = l.begin();itr != l.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    l.clear();
    cout<<"Now the size is "<<l.size()<<endl;

    return 0;
}