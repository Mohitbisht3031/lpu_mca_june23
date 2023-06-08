// https://leetcode.com/problems/count-the-digits-that-divide-a-number/

#include<bits/stdc++.h>
 using namespace std;

// iterative approach
    int countDigits(int num) {
        int c = 0;
        int temp = num;
        while(temp){
            int d = temp%10;
            temp/=10;
            if(num%d == 0)c++;
        }   
        return c;
    }

// rcursive approach

    int helper(int num,int temp){
        if(temp == 0)return 0;
        int d = temp%10;
        int c = 0;
        if(num %d ==0) c++;
        return helper(num,temp/10)+c;
    }

    int countDigits(int num) {
        return helper(num,num);
    }
 int main(){

    return 0;
 }