#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;
int minimo = INT_MAX;

int dfs(vector<vi> &grafo, vector<int> &visitados, int nodo, vi &valores) {
  visitados[nodo] = 1;
  minimo = min(valores[nodo], minimo);
  for (auto x : grafo[nodo]) {
    if (visitados[x] == -1) {
      visitados[x] = 1;
      dfs(grafo, visitados, x, valores);
    }
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
  for (int i = 1; i <= n; i++) {
    cin >> valores[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    grafito[a].push_back(b);
    grafito[b].push_back(a);
  }
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    if (visitados[i] == -1) {
      minimo = INT_MAX;
      ans += dfs(grafito, visitados, i, valores);
    }
  }
  cout << ans;
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
