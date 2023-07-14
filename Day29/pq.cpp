#include<bits/stdc++.h>
using namespace std;

class PQ{
    vector<int>v;
    public:
    bool isEmpty(){
        return v.size() == 0;
    }

    int size(){
        return v.size();
    }

    int getMin(){
        if(v.size() == 0)return -1;
        return v[0];
    }

    void insert(int val){
        v.push_back(val);
        int ci = v.size()-1;
        int pi = (ci-1)/2;

        while(ci > 0){
            if(v[ci] < v[pi]){
                swap(v[ci],v[pi]);
            }else break;
            ci = pi;
            pi = (ci-1)/2;
        }
        return ;
    }

    int removeMin(){
        if(v.size() == 0)return -1;
        int ans = v[0];
        swap(v[0],v[v.size()-1]);
        v.pop_back();
        int pi = 0;
        int lci = (2*pi+1);
        int rci = (2*pi+2);

        while(lci < v.size()){
            int minI = pi;
            if(lci < v.size() && v[minI] > v[lci]){
                minI = lci;
            }
            if(rci < v.size() && v[minI] > v[rci]){
                minI = rci;
            }
            if(minI == pi)break;
            swap(v[pi],v[minI]);
            pi = minI;
            lci = 2*pi+1;
            rci = 2*pi+2;
        }

        return ans;
    }

};


int main(){

    return 0;
}