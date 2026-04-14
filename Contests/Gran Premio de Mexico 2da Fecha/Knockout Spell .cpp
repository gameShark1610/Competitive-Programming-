#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n,k; cin>>n>>k;
    vector<vector<int>> square(n,vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>square[i][j];
        }
    }
    int cont=0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i+k-1<n && j+k-1<n) {
                if (square[i][j]==square[i+k-1][j] && square[i][j]==square[i][j+k-1] && square[i][j]==square[i+k-1][j+k-1]) cont++;
            }
        }
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
