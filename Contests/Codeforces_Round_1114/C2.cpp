
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int n;
  string s1, s2, cs1, cs2;
  cin >> n >> s1 >> s2;
  if (s1 == s2) {
    cout << "YES" << '\n';
    return;
  }
  for (int i = 1; i < n - 1; i++) {
    if (s1[i] == s2[i]) {
      cout << "YES" << '\n';
      return;
    }
  }
  cout << "NO" << '\n';
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
