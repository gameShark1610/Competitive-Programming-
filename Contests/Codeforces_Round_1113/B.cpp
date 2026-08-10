#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int n, m;
  cin >> n >> m;
  vi a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  if (2 * m > n) {
    cout << "NO";
    return;
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for (int i = 0; i < m; i++) {
    if (a[i] > b[i]) {
      cout << "NO";
      return;
    }
  }

  for (int i = n - 1, j = m - 1; i >= n - m; i--, j--) {
    if (j < 0) {
      break;
    }
    if (a[i] < b[j]) {
      cout << "NO";
      return;
    }
  }
  cout << "YES";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
    cout << '\n';
  }

  return 0;
}
