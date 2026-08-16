#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int n;
  cin >> n;
  map<int, int> numbers;
  for (int i = 0; i < n; i++) {
    int xd;
    cin >> xd;
    numbers[xd]++;
  }
  int contDel = 0;
  for (auto xd : numbers) {
    if (xd.first != xd.second) {
      if (xd.second > xd.first) {
        contDel += xd.second - xd.first;
      } else
        contDel += xd.second;
    }
  }
  cout << contDel << '\n';
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
