#include <bits/stdc++.h>

using namespace std;

void sol(){
    int n,a,countEven=0,countOdd=0; cin>>n;
    for(int i{};i<n;i++){
        cin>>a;
        if(a%2==0) countEven++;
        else countOdd++;
    }
    if(countOdd%2 == 0) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){

        sol();
    }


}
