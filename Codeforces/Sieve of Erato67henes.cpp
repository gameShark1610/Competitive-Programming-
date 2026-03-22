#include <bits/stdc++.h>

using namespace std;

void sol(){
    int n,a; cin>>n;
    int fla1=0,fla2=0;
    for(int i{};i<n;i++){
        cin>>a;
        if(a==1) fla1=1;
        if(a==67) fla2=1;
    }
    if(fla2) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}

int main(){
    int t; cin>>t;
    while(t--){
        sol();
    }
}
