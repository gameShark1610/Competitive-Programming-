#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

void sol() {
  int n;
  string s;
  cin >> n >> s;
  int n1 = 0, n0 = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0') {
      n0++;
    } else
      n1++;
  }
  if (abs(n1 - n0) > 2) {
    cout << -1;
    return;
  }
  string nu = "";
  nu += s[0];
  int re1 = 0, re0 = 0;
  for (int i = 1; i < n; i++) {
    if (s[i] != s[i - 1]) {
      nu += s[i];
    } else {
      if (s[i] == '0') {
        re0++;
      } else
        re1++;
    }
  }
  int nu1 = 0, nu0 = 0;
  for (int i = 0; i < nu.size(); i++) {
    if (nu[i] == '0') {
      nu0++;
    } else
      nu1++;
  }
  int sumar = 0;
  if (abs(re0 - re1) > 1) {
    sumar = abs(re0 - re1) - 1;
  }
  // cout << nu0 << " " << nu1 << " ";
  cout << s.size() - nu.size() + sumar;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    sol();
    cout << '\n';
  }
}
