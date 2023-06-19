#include<bits/stdc++.h>

using namespace std;

int main(){
    // int a = 10; //static allocation / stack memory
    int *ptr = new int; // DMA / heap memory
    int *ptr = (int*)malloc(sizeof(int));
    // *ptr = 10;
    int n ;
    cin>>n;
    int *arr = new int[n];
    arr[2] = 10; // arr[2] == *(arr+2)
    arr[1] = 5;

    cout<<arr[2]<<" "<<arr[1]<<endl;

    return 0;
}