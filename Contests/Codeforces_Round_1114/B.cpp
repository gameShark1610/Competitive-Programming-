#include <bits/stdc++.h>
#include <vector>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  vector<pair<int, char>> memo;
  int cont = 1;
  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
      cont++;
    } else {
      memo.push_back({cont, s[i - 1]});
      cont = 1;
    }
  }
  memo.push_back({cont, s[n - 1]});
  int ans = memo.size();
  // for (auto xd : memo) {
  // cout << xd.first << " " << xd.second << " ";
  //}
  // cout << '\n';
  int flag = 0;
  for (int i = 1; i < memo.size() - 1; i++) {
    if (memo[i].first == 1) {
      flag = 1;
      if (memo[i - 1].second == memo[i + 1].second) {
        ans = ans - 2;
        break;
      }
    }
    if (i == memo.size() - 2) {
      if (flag) {
        ans--;
      }
    }
  }
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
