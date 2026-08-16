#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int a, b;
  cin >> a >> b;
  vi safe;
  vi borke;
  while (a--) {
    int piso;
    string s;
    cin >> piso >> s;
    if (s == "SAFE") {
      safe.push_back(piso);
    } else
      borke.push_back(piso);
  }
  safe.push_back(1);
  borke.push_back(b);
  sort(safe.begin(), safe.end());
  sort(borke.begin(), borke.end());

  cout << safe[safe.size() - 1] + 1 << " " << borke[0] - 1;
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
