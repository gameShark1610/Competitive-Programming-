#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void sol() {
  int n;
  cin >> n;
  n = 2 * n;
  vector<ll> nums(n);
  for (auto &i : nums)
    cin >> i;
  map<ll, ll> mapita;
  vector<ll> dp(n + 1);
  dp[n] = 0;
  for (ll i = n - 1; i >= 0; i--) {

    if (mapita.find(nums[i]) == mapita.end()) {
      dp[i] = 1 + dp[i + 1];

      mapita[nums[i]] = i;
    } else {
      dp[i] = max((long long)pow((mapita[nums[i]] - i + 1), 2) +
                      dp[mapita[nums[i]] + 1],
                  dp[i + 1] + 1);
    }
    // cout << dp[i] << " ";
  }
  cout << dp[0] << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    sol();
  }
}
