#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    //int n;cin>>n;;
    //long long ans=0;
    string s; cin>>s;
    for(auto xd: s){
        if(xd=='z' || xd=='x' || xd=='c' || xd=='v' || xd=='b' || xd=='n' || xd=='m')
        continue;
        cout<<xd;
    }
    cout<<'\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
