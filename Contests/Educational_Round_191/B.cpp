//
// Created by gameshark on 16/06/2026.
//
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n; cin>>n;
    vi ans(4*n+1);
    if (n==2) {
        cout<<"1 2 1 2 2 1 1 2"<<'\n';
        return;
    }
    int cont=0;
    for (int i = 1; i <= 4; ++i) {
        if (i>2) cont++;
        if (i>3) cont++;
        for (int j = 1; j <= n; ++j) {
            int indice=(i-1)*n+j;
            ans[indice]=(j+cont-1)%n+1;
        }
    }


    for (int i = 1; i <= 4*n; ++i) {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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

