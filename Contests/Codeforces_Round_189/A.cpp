#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    string palabra; cin>>palabra;
    int cont=0;
    for (int i = 0; i < palabra.length()-1; ++i) {
        if (palabra[i]==palabra[i+1])
            cont++;
    }
    if (cont<=2) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
