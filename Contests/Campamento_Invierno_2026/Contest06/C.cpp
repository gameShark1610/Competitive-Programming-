#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n,m; cin>>n>>m;
    vector<int> numbers(n);
    for(auto &i: numbers) cin>>i;
    sort(numbers.begin(), numbers.end());
    int minimo=numbers[0];
    int ans=1;
    for(int i=1; i<n; i++){
        if(numbers[i]-minimo>m){
            minimo=numbers[i];
            ans++;
        }
        
    }
    cout<<ans;
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
