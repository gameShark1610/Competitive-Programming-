#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int n;
  string s1, s2, cs1, cs2;
  cin >> n >> s1 >> s2;
  cs1 = s1;
  cs2 = s2;
  for (int i = 0; i < n - 2; i++) {
    if (s1[i] != s2[i]) {
      if (s1[i] == '0') {
        if (s1[i] == '0' && s1[i + 1] == '1' && s1[i + 2] == '1') {
          s1[i] = '1';
          s1[i + 2] = '0';
        }

        if (s1[i] == '0' && s1[i + 1] == '0' && s1[i + 2] == '1') {
          s1[i] = '1';
          s1[i + 2] = '0';
        }
      } else {
        if (s1[i] == '1' && s1[i + 1] == '0' && s1[i + 2] == '0') {
          s1[i] = '0';
          s1[i + 2] = '1';
        }
        if (s1[i] == '1' && s1[i + 1] == '1' && s1[i + 2] == '0') {
          s1[i] = '0';
          s1[i + 2] = '1';
        }
      }
    }
  }
  for (int i = n; i > 1; i--) {
    if (cs1[i] != cs2[i]) {
      if (cs1[i] == '0') {
        if (cs1[i] == '0' && cs1[i - 1] == '1' && cs1[i - 2] == '1') {
          cs1[i] = '1';
          cs1[i - 2] = '0';
        }

        if (cs1[i] == '0' && cs1[i - 1] == '0' && cs1[i - 2] == '1') {
          cs1[i] = '1';
          cs1[i - 2] = '0';
        }
      } else {
        if (cs1[i] == '1' && cs1[i - 1] == '0' && cs1[i - 2] == '0') {
          cs1[i] = '0';
          cs1[i - 2] = '1';
        }
        if (cs1[i] == '1' && cs1[i - 1] == '1' && cs1[i - 2] == '0') {
          cs1[i] = '0';
          cs1[i - 2] = '1';
        }
      }
    }
  }

  int a1 = 0, a2 = 0;
  if (s1 == s2) {
    a1 = 1;
  }
  if (cs1 == s2) {
    a2 = 1;
  }

  if (a1 || a2) {
    cout << "YES" << '\n';
    return;
  } else
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
