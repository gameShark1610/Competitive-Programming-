#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n; cin>>n;
    string num; cin>>num;
    int cont=0;
    for (int i = 0; i < n; ++i) {
        if (num[i]!='8' && num[i]!='0' && num[i]!='6') cont++;
    }
    cout<<cont;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
