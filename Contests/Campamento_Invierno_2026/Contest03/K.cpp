#include <bits/stdc++.h>
#include <cmath>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int a, b, c, a1, b1, c1;
  cin >> a >> b >> c >> a1 >> b1 >> c1;
  int cont = 0;
  if (a == a1 || a == b1 || a == c1) {
    cont++;
  }
  if (b == a1 || b == b1 || b == c1) {
    cont++;
  }
  if (c == a1 || c == b1 || c == c1) {
    cont++;
  }
  if (cont < 3) {
    cout << "NO";
    return;
  }
  if (a == b && a == c && b == c) {
    cout << "NO";
    return;
  }
  vi check = {a, b, c};
  sort(check.begin(), check.end());
  int hip = check[0] * check[0] + check[1] * check[1];
  if (hip == (check[2] * check[2])) {
    cout << "YES";
  } else
    cout << "NO";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
