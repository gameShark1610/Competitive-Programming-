#include <iostream>

#define nl "\n"
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>n>>a>>b;
        if(a+b<=n-2){
            cout<<"Yes"<<nl;
        }
        else if(a==b && b==n) cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
    }
    return 0;
}
