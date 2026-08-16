#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> primefavtorsSiege(int n) {
  vector<vector<int>> primeFactors(n + 1);
  for (int p = 2; p <= 2; ++p) {
    if (primeFactors[p].empty())
      for (int j = p; j <= n; j += p)
        primeFactors[j].push_back(p);
  }
  return primeFactors;
}

int main() {
  int n;
  vector<int> numbers;
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }

  vector<vector<int>> primos;
  primos = primefavtorsSiege(n);

  for (int i = 0; i < primos.size(); i++) {
    vector<int> check(n, 0);
    for (int j = 0; j < n; j++) {
      check[(numbers[i] % primos[i])] = 1;
    }
    int cont = 0;
    for (int x : check) {
      if (x == 0)
        cont++;
    }
    if (cont == 0)
      cout << primos[i];
  }
  cout << -1;
}
