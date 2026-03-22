#include <bits/stdc++.h>

using namespace std;

void sol(){
    int a,b,c; cin>>a>>b>>c;
    if(c%2!=0){
        a+=c/2+1;
        b+=c/2;
    }
    if(a>b) cout<<"First"<<'\n';
    else cout<<"Second"<<'\n';


}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        sol();
    }

}
