#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define ll long long
void solve() {
  ll n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  if (s[a - 1] == s[b - 1]) {
    cout << 0;
  } else
    cout << 1;
  ll h = INT_MAX, xd = INT_MAX;
  for (ll i = b - 2; i >= 0; i--) {
    if (s[a - 1] == s[i]) {
      h = min(h, abs(b - 1 - i));
    }
  }
  for (ll i = b; i < n; i++) {
    if (s[a - 1] == s[i]) {
      h = min(h, abs(i - b + 1));
    }
  }
  for (ll i = a - 2; i >= 0; i--) {
    if (s[a - 1] != s[i]) {
      xd = min(xd, abs(a - 1 - i));
    }
  }
  for (ll i = a; i < n; i++) {
    if (s[a - 1] != s[i]) {
      xd = min(xd, abs(i - a + 1));
    }
  }

  cout << min(h, xd);
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
