//
// Created by Yair on 4/27/2026.
//

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n;
    if (!(cin >> n)) return;

    //para mas preiciosn, de 17 a 18 nums a 18 o 19 nums
    vector<long double> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    vector<long double> memo(n);
    memo[n-1] = a[n-1];

    for (int i = n-2; i >= 0; --i) {
        // 1 es int, 1l es long int, 1.0 es double y 1.0l es long double
        memo[i] = max(memo[i+1], a[i] + memo[i+1] * (1.0L-b[i]/100.0L));
    }
    cout <<setprecision(7)<<memo[0]<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) t = 1;
    while (t--) {
        solve();
    }
    return 0;
}