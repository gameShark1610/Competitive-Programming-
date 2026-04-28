#include <bits/stdc++.h>

using namespace std;

using ll = long long;
int mod = 998244353;
int k;

int memo[2505][2505];

int dp(int suma, int tamanoAnterior)
{
    if (suma == 0) return 1;
    if (suma < 0) return 0;
    if (memo[suma][tamanoAnterior] != -1) return memo[suma][tamanoAnterior];

    int limite=suma/(tamanoAnterior);

    ll sumita = 0;
    for (int i = 1; i <= limite; ++i) {
        if (tamanoAnterior + i > k+1) break;
        sumita += dp(suma - (tamanoAnterior) * (i), i);
        if (sumita >= mod) sumita %= mod;
    }
    memo[suma][tamanoAnterior] = sumita;

    return sumita;
}

void solve() {
    int n;
    if (!(cin >> n >> k)) return;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            memo[i][j] = -1;
        }
    }

    ll answ = 0;
    for (int i = 0; i < k; i++) {
        answ = (answ + dp(n, i)) % mod;
    }
    cout << answ << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    if (!(cin >> t)) t = 1;
    while (t--) {
        solve();
    }

    return 0;
}