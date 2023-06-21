#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    // if(is_sorted(v.begin(),v.end())){
    //     cout<<"the givrn array is sorted"<<endl;
    // }

    if(binary_search(v.begin(),v.end(),6)){
        cout<<"the given number is present in the array"<<endl;
    }else cout<<"The given number is not present in the array"<<endl;

    int ind = upper_bound(v.begin(),v.end(),3) - v.begin();
    cout<<ind<<endl;
    int ind2 = lower_bound(v.begin(),v.end(),3) - v.begin();
    cout<<ind2<<endl;
    // sort(v.begin(),v.end(),greater<int>());
    // for(int e:v)cout<<e<<" ";
    // cout<<endl;

    // if(is_sorted(v.begin(),v.end())){
    //     cout<<"the givrn array is sorted"<<endl;
    // }

    return 0;
}