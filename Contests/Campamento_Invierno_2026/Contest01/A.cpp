#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;
int minimo = 0;

int dfs(vector<vi> &grafo, vector<int> &visitados, int nodo) {
  visitados[nodo] = 1;
  for (auto x : grafo[nodo]) {
    if (visitados[x] == -1) {
      visitados[x] = 1;
      return minimo || dfs(grafo, visitados, x);
    } else
      return 1;
  }
  return minimo;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> visitados(n + 1, -1);
  vector<vi> grafito(n + 1);
  int a, b, c;
  vi valores(n + 1);
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    if (i == 0) {
      c = a;
    }
    grafito[a].push_back(b);
  }
  int check = dfs(grafito, visitados, c);
  if (check == 1) {
    cout << 1;
  } else
    cout << n - 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
