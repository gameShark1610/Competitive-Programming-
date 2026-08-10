#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int a, b, x;
  cin >> a >> b >> x;
  if (x == 1 || a == b) {
    cout << abs(a - b) << '\n';
    return;
  }
  int ans = abs(a - b);
  int cont = 0;
  while (a > 0 || b > 0) {
    cont++;
    if (a >= b) {
      a /= x;
    } else {
      b /= x;
    }
    ans = min(ans, abs(a - b) + cont);
  }
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
