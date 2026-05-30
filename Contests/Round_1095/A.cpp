//
// Created by Yair on 5/2/2026.
//
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n; cin>>n;
    int sum=0;
    vi num(n+2);
    vi ans(n,0);
    for (int i = 0; i < n; ++i) {
        int numerito;
        cin>>numerito;
        ans[numerito]++;
    }

    int mex=0,indice=0;
    while (true) {
        if (ans[indice]>0) {
            mex++;
            ans[indice]++;
        }
        else {
            ans[indice];
        }
    }

    sort(num.begin(),num.end());

    for (auto xd: num) cout<<xd<<" ";

    int cont=0;

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
