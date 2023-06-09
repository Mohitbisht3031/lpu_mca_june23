#include<bits/stdc++.h>
using namespace std;

void display(int arr[]){
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i<size;i++){
        cout<<i<<"th element in the array is : "<<arr[i]<<endl;
    }
}

int main(){

    // int arr[10];
    int arr[] = {0,1,2,3,4,5};

    display(arr);

    return 0;
}