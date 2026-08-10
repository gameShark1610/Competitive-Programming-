#include <bits/stdc++.h>
#include <climits>

using namespace std;

void sol() {
  int n, maxi = INT_MIN, mini = INT_MAX;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    maxi = num > maxi ? num : maxi;
    mini = num < mini ? num : mini;
  }
  cout << maxi + 1 - mini << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--)
    sol();

  return 0;
}
