#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;
int testCases=1;

void solve() {
  int n, m;
  cin >> n >> m;
  if (n == 0 && m == 0)
    return;

  vector<vector<int>> grid(n + 1, vector<int>(m + 1, 0));
  // 1=queen, 2=knigth, 3=pawmn, 0=vacio, 4=muerta
  int x, y;
  for (int i = 0; i < 3; i++) {
    int numMovs;
    cin >> numMovs;
    while (numMovs--) {
      cin >> x >> y;
      grid[x][y] = i + 1;
    }
  }
  //
  int movQueenR[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int movQueenC[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  int movKnR[] = {-2, 2, -2, 2, -1, -1, 1, 1};
  int movKnC[] = {-1, -1, 1, 1, -2, 2, -2, 2};
  // queue<pair<int, int>> q;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (grid[i][j] == 1) {
        for (int k = 0; k < 8; k++) {
          int nMovR = i + movQueenR[k];
          int nMovC = j + movQueenC[k];
          while (true) {
            if (nMovR < 1 || nMovR > n || nMovC < 1 || nMovC > m)
              break;
            int pieza = grid[nMovR][nMovC];
            if (pieza == 3 || pieza == 2 || pieza == 1)
              break;
            grid[nMovR][nMovC] = 4;
            nMovR += movQueenR[k];
            nMovC += movQueenC[k];
          }
        }
      }

      if (grid[i][j] == 2) {
        for (int k = 0; k < 8; k++) {
          // while(){
          int nMovR = i + movKnR[k];
          int nMovC = j + movKnC[k];
          if (nMovR < 1 || nMovR > n || nMovC < 1 || nMovC > m)
            continue;
          if (grid[nMovR][nMovC] == 0)
            grid[nMovR][nMovC] = 4;
          //}
        }
      }
    }
  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (grid[i][j] == 0) {
        ans++;
      }
    }
  }
  cout<<"Board "<<testCases<<" has "<<ans<<" safe squares."<<'\n';
  testCases++;
  solve();
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
