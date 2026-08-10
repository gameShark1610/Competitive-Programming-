#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
  int n, k;
  cin >> n >> k;
  vi nums(n);
  int maxi = -1;
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  int contN = n;
  sort(nums.begin(), nums.end());
  for (int i = n - 1; i >= 0; i--) {
    if (nums[i] - nums[0] <= k) {
      maxi = nums[i];
      break;
    } else
      contN--;
  }
  int contMaxi = count(nums.begin(), nums.end(), maxi);
  if (contN == contMaxi) {
    if (nums[0] == maxi) {
      contMaxi--;
    }
    if (contMaxi % 2 == 0) {
      cout << "NO" << '\n';
      return;
    }
  }
  cout << "YES" << '\n';
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
