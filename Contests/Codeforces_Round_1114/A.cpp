#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b || b == c || a == c) {
    cout << 0 << '\n';
    return;
  }
  int ans = min(min(abs(a - b), abs(a - c)), abs(b - c));
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
