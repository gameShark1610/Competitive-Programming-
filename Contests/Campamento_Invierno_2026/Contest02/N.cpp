#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int n;
  cin >> n;
  vi numbers(n);
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }
  int m;
  cin >> m;
  sort(numbers.begin(), numbers.end());

  while (m--) {
    int x;
    long long ans = 0;

    cin >> x;
    auto it = upper_bound(numbers.begin(), numbers.end(), x);
    int num = it - numbers.begin();
    cout << num << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  while (t--) {
    solve();
  }

  return 0;
}
