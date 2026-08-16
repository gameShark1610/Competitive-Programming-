#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  string s;
  cin >> s;
  map<int, int> mapita;

  for (auto xd : s) {
    mapita[xd]++;
  }
  vector<int> demo;
  for (auto xd : mapita) {
    demo.push_back(xd.second);
  }

  sort(demo.begin(), demo.end());

  int ans = 0;
  for (int i = demo.size() - 3; i >= 0; i--) {
    ans += demo[i];
  }
  cout << ans;
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
