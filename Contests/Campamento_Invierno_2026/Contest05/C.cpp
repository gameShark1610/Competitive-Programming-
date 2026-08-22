#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n;cin>>n;;
    long long ans=0;
    vector<int> numbers(n);
    for(auto &i: numbers) cin>>i;

    sort(numbers.begin(),numbers.end());

    for(int i=0; i<n; i++){
        if(i%2 == 1){
            ans+=numbers[i];
        }
    }
    cout<<ans<<'\n';
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
