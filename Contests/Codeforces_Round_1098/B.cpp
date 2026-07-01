#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int DistIz(int n, int x1, int x2) {
  int dis = x2 - x1;
  if (dis < 0) {
    dis = n - x1 + x2;
  }
  return dis;
}

int DistDer(int n, int x1, int x2) {
  int dis = x1 - x2;
  if (dis < 0) {
    dis = n - x2 + x1;
  }
  return dis;
}

void sol() {
  int n, x1, x2, k;
  cin >> n >> x1 >> x2 >> k;
  if (n == 2 || n == 3) {
    cout << 1 << '\n';
  } else {
    int disIz = DistIz(n, x1, x2);
    int distDer = DistDer(n, x1, x2);

    int dis = min(disIz, distDer);
    if (distDer == disIz) {
      cout << distDer + k << '\n';
    } else {
      cout << dis + k << '\n';
    }
  }
  return;
}

int main(int argc, char *argv[]) {
  int t = 1;
  cin >> t;
  while (t--) {
    sol();
  }
  return 0;
}
