#include <bits/stdc++.h>

using namespace std;

vector<int> check(100005, 0);

vector<int> obtener_divisores(int n) {
  vector<int> divisores;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      divisores.push_back(i);
      if (i != n / i) {
        divisores.push_back(n / i);
      }
    }
  }
  sort(divisores.begin(), divisores.end());
  return divisores;
}

void sol() {
  int n, m;
  cin >> n >> m;
  vector<int> disp(n);
  for (auto &i : disp)
    cin >> i;

  vector<int> losReales;
  sort(disp.begin(), disp.end());
  for (auto xd : disp) {
    obtener_divisores(int n)
  }

  vector<int> res = obtener_divisores(m);
  int cont = 0;
  for (auto xddd : res) {
    bool flag = false;
    for (auto xd : disp) {
      if (xd % xddd == 0) {
        flag = true;
        break;
      }
    }
    if (!flag)
      cont++;
  }

  cout << cont << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--)
    sol();
  return 0;
}
