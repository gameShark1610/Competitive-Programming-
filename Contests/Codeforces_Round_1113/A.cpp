#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  string s;
  cin >> s;
  int cont1 = 0, cont2 = 0;
  for (int i = 0; i < s.length(); i++) {
    if (cont1 == 0 && s[i] == '1') {
      cont1++;
    } else if (cont2 == 0 && s[i] == '0') {
      cont2++;

    } else
      cout << s[i];
  }
  cout << '\n';
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
