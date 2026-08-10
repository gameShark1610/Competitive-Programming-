#include <algorithm>
#include <bits/stdc++.h>
#include <queue>
#include <stack>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int n;
  cin >> n;
  vi number(n);
  for (int i = 0; i < n; i++) {
    cin >> number[i];
  }
  sort(number.begin(), number.end());
  int cont = 1;
  pi maxi = {0, -1};
  for (int i = 1; i < n; i++) {
    if (number[i] == number[i - 1]) {
      cont++;
    } else
      cont = 1;
    if (maxi.first < cont) {
      maxi.first = cont;
      maxi.second = number[i];
    }
  }
  int sumExtra = 0;
  for (int i = 0; i < n; i++) {
    if (number[i] != maxi.second)
      sumExtra += number[i];
  }
  cout << sumExtra + min(maxi.first, n - maxi.first + 2) * maxi.second << '\n';
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
