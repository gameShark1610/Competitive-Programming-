#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    long long n; cin>>n;
    if(n==1) cout<<"Second";
    else{
        if(((n+1)&n) == 0) cout<<"Second";
        else cout<<"First";
    }

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
    cout<<'\n';
  }

  return 0;
}
