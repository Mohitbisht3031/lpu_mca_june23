#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    //rotate
    int size = 5;
    int narr[size];
    for(int i = 0;i<size;i++){
        narr[(i+1)%size] = arr[i];
    }

    return 0;
}