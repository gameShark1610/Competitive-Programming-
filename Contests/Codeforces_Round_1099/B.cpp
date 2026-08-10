//
// Created by gameshark on 28/05/2026.
//
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

int checar(ll &limitIzq, ll &limitDer, ll &nuevoLimizq, ll &nuevoLimDer) {
  if (nuevoLimDer < limitDer) {
    return 0;
  }
  if (nuevoLimizq > limitDer) {
    return 0;
  }
  limitIzq = nuevoLimizq > limitIzq ? nuevoLimizq : limitIzq;
  limitDer = nuevoLimDer < limitDer ? nuevoLimDer : limitDer;
  return 1;
}

void solve() {
  int n;
  cin >> n;
  vector<ll> nums(n);
  ll limitIzq = INT_MAX, limitDer = INT_MAX;
  for (int i = 0; i < n; i++)
    cin >> nums[i];
  ll maxi = 0;
  for (int i = 1; i < n; i++) {
    maxi = max(maxi, nums[i - 1] - nums[i]);
  }
  for (int i = 1; i < n; i++) {
    if (nums[i] < nums[i - 1]) {
      nums[i] += maxi;
    }
  }

  if (is_sorted(nums.begin(), nums.end())) {
    cout << "YES\n";
  } else
    cout << "NO\n";
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
