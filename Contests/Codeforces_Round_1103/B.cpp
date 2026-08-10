#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  for (int i = 0; i < n - k; i++) {
    if (s[i] == '1') {
      s[i] = '0';
      s[i + k] = s[i + k] == '0' ? '1' : '0';
    }
  }
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      cout << "NO" << '\n';
      return;
    }
  }
  cout << "YES" << '\n';
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
