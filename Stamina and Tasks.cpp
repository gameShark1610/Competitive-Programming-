//
// Created by Yair on 4/27/2026.
//

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;



double memo[100000];

void solve() {
    int n; cin>>n;
    //int a,b,c;
    vector<double> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i]>>b[i];
        c[i]=1-b[i]/100;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {

        }
    }


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
