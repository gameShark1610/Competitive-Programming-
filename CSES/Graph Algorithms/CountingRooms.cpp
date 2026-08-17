#include <bits/stdc++.h>

using namespace std;

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};
int n, m;

void bfs(vector<string> &grid, vector<vector<bool>> &visitados,
         pair<int, int> pos) {
  queue<pair<int, int>> q;
  q.push(pos);
  visitados[pos.first][pos.second] = true;

  while (!q.empty()) {
    pair<int, int> currPos = q.front();
    q.pop();
    for (int i = 0; i < 4; i++) {
      pair<int, int> nPos;

      nPos = {currPos.first + dr[i], currPos.second + dc[i]};
      if (nPos.first < 0 || nPos.first > n - 1 || nPos.second < 0 ||
          nPos.second > m - 1) {
        continue;
      }
      if (grid[nPos.first][nPos.second] != '#' &&
          visitados[nPos.first][nPos.second] == 0) {
        q.push(nPos);
        visitados[nPos.first][nPos.second] = true;
      }
    }
  }
}

void sol() {
  cin >> n >> m;
  vector<string> grid(n);
  vector<vector<bool>> visitados(n, vector<bool>(m, false));
  for (int i = 0; i < n; i++)
    cin >> grid[i];

  int cont = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < grid[i].size(); j++) {
      if (visitados[i][j] == false && grid[i][j] == '.') {
        cont++;
        bfs(grid, visitados, {i, j});
      }
    }
  }
  cout << cont;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  sol();
  return 0;
}
