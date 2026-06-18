//
// Created by gameshark on 16/06/2026.
//
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n,x,y,z; cin>>n>>x>>y>>z;

    int val1=n/(x+y);
    if (val1==0) {
        cout<<val1+1<<'\n';
        return;
    }
    if (n%(x+y)!=0) val1++;

    int config=z*x;
    int n2= n-config;
    if (n-config < 0) n2=0;
    int val2=n2/(x+y*10);
    if (val2==0) {
        val2++;
    }
    else if (n2%(x+y*10)!=0) val2++;
    val2+=z;

    if (val1<=val2) cout<<val1<<'\n';
    else cout<<val2<<'\n';


}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
