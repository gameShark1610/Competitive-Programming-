#include<bits/stdc++.h>

using namespace std;

bool sol(){
    bool result=false;
    int a,b,c;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>c;
        if(c==b) result=true;
    }
    return result;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        bool ans;
        ans=sol();
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
