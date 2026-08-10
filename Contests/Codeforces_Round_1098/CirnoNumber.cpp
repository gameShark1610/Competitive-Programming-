#include <bits/stdc++.h>
#include <string>

using namespace std;

using ll = long long;

void sol() {
  ll a, n, d1, d2;
  cin >> a >> n >> d1 >> d2;
  string wd1 = to_string(d1);
  string wd2 = to_string(d2);
  ll dist1 = -1, dist2 = -1;
  dist1 = abs(a - d1);
  dist2 = abs(a - d2);
  string word1 = to_string(d1);
  string word2 = to_string(d2);
  while (true) {
    word1 += wd1;
    ll nueva_dis = abs(a - stoll(word1));
    if (nueva_dis < dist1) {
      dist1 = nueva_dis;
    } else
      break;
  }
  while (true) {
    word2 += wd2;
    ll nueva_dis = abs(a - stoll(word2));
    if (nueva_dis < dist2) {
      dist2 = nueva_dis;
    } else
      break;
  }

  cout << min(dist1, dist2) << '\n';
}

int main(int argc, char *argv[]) {
  int t = 1;
  cin >> t;
  while (t--) {
    sol();
  }
  return 0;
}
