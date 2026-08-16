#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;
int INF = INT_MAX;
int a, b;
int f(vector<vi> &matriz, vector<vi> &visitados, pi pos, int cont) {
  int i = pos.first, j = pos.second;
  // cout << i << " " << j << "\n";
  if (i < 1 || i > a || j < 1 || j > b) {
    return INF;
  }
  if (visitados[i][j] == 0) {
    return INF;
  }
  if (visitados[i][j] != -1) {
    return visitados[i][j];
  }
  if (i == a && j == b) {
    return cont;
  }
  visitados[i][j] = 0;
  int a1, a2, a3, a4;
  int mov = matriz[i][j];
  if (mov == 0)
    return INF;
  cout << mov << "\n";
  a1 = f(matriz, visitados, {i + mov, j}, cont + 1);
  a2 = f(matriz, visitados, {i - mov, j}, cont + 1);
  a3 = f(matriz, visitados, {i, j + mov}, cont + 1);
  a4 = f(matriz, visitados, {i, j - mov}, cont + 1);
  // cout << a1 << " " << a2 << " " << a3 << " " << a4 << '\n';
  visitados[i][j] = min(a1, min(a2, min(a3, a4)));
  return visitados[i][j];
}

void solve() {
  // int a, b;
  cin >> a >> b;
  vector<string> xdddd(a);
  for (int i = 0; i < a; i++) {
    cin >> xdddd[i];
  }
  vector<vi> visitados(a + 1, vi(b + 1, -1));
  vector<vi> grid(a + 1, vi(b + 1));
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      grid[i][j] = xdddd[i - 1][j - 1] - '0';
    }
  }

  int ans = f(grid, visitados, {1, 1}, 0);
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      cout << visitados[i][j] << " ";
    }
    cout << '\n';
  }
  if (ans == INF)
    cout << -1;
  else
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
