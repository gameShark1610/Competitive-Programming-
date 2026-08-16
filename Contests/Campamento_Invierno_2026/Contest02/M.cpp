#include <bits/stdc++.h>
#include <vector>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

int cont = 0;
int check;
void dfs(vector<vi> &graph, vi &valores, int padre, int nodo, int xd) {
  if (valores[nodo] == 1) {
    xd++;
  } else
    xd = 0;

  if (xd > check)
    return;

  if (graph[nodo].size() == 1 && nodo != 1) {
    // cout << " " << nodo;
    if (xd <= check) {
      cont++;
    }
  }

  for (auto x : graph[nodo]) {
    if (x != padre) {
      dfs(graph, valores, nodo, x, xd);
    }
  }
  return;
}

void solve() {
  int n, m;
  cin >> n >> m;
  check = m;
  vi valores(n + 1);
  vector<vi> graph(n + 1);

  for (int i = 1; i <= n; i++) {
    cin >> valores[i];
  }
  for (int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    // cout << a << " " << b << " ";
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  // for (auto x : graph[1]) {
  // cout << x << " ";
  //}
  dfs(graph, valores, 0, 1, 0);
  cout << cont;
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
