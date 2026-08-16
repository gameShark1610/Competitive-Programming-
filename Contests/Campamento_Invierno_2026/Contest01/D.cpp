#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  cin >> n;
  long long ans = 1 << n;
  ans = ans - 1 - n;
  cout << ans;
}
