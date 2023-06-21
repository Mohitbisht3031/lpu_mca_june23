#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v = {"Mercury","venus","earth","mars","jupitor","saturn","uranus","neptune"};

    vector<string>::iterator falcon = v.begin();
    vector<string>::iterator pslv = v.begin();

    cout<<"setting the cousre to "<<*(falcon+3)<<endl;
    advance(falcon,3);
    cout<<"flacon is at "<<*falcon<<endl;
    advance(falcon,-1);
    cout<<"flacon is at "<<*falcon<<endl;

    // cout<<"the distace between pslv and flacon "<<distance(pslv,falcon)<<endl;

    falcon = next(falcon,1);
    cout<<"flacon is at "<<*falcon<<endl;

    return 0;
}