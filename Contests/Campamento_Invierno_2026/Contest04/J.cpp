#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

int memo[1000000005];

void check(long long &a, long long &b, long long curr){
    if(curr<=0) return;
    if(memo[curr]==-1) return;
    if(curr==)
    check(a,b,curr+b);
    check(a,b,curr+a);
    check(a,b,curr-b);
    check(a,b,curr-a);

}

void solve() {
    long long a,b,c; cin>>a>>b>>c;
    if(a==1 || b==1){
        long long ans=max(a,b);
        ans=c/ans + c%ans;
    }
    check(a,b,a);
    check(a,b,b);

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
