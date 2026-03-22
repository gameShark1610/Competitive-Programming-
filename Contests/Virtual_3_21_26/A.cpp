#include <bits/stdc++.h>

using namespace std;


void sol(){
    int n,s,x; cin>>n>>s>>x;
    int sum=0,number;
    for(int i{};i<n;i++){
        cin>>number;
        sum+=number;
    }
    if(sum==s){
        cout<<"YES\n";
        return;
    }
    if(sum>s){
        cout<<"NO\n";
        return;
    }

    if((s-sum)%x==0){
        cout<<"YES\n";
    }else cout<<"NO\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--)
    sol();

    return 0;
}
