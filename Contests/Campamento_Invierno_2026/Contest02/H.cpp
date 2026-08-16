#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;
  long long che = a + b;
  long long ans = 1;
  for (int i = 0; i < che; i++) {
    ans = ans * 2;
    ans = ans % 998244353;
  }
  cout << ans;
}
