#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    set<int> m;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        m.insert(x);
    }
    cout<<m.size()<<'\n';
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--)solve();
}