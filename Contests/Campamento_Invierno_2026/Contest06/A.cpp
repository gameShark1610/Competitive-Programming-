#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin>>s;
    int contA=0,contB=0, contC=0;
    for(auto xd: s) {
        if(xd=='A') contA++;
        else if(xd=='B') contB++;
        else contC++;
    }
    int mininimo= min(contA,min(contB, contC));

    if(s.size()==3) cout<<1;
    else cout<<2;
}