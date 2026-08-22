#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n;cin>>n;;
    //long long ans=0;
    stack<pi> pilita;
    
    vector<int> numbers(n);
    for(auto &i: numbers) cin>>i;
    long long ans=0;
    pilita.push({numbers[0],0});

    pi before;
    for(int i=1; i<n;i++ ){
        //auto [x,y]=pilita.top();
        before=pilita.top();
        while(!pilita.empty() && numbers[i]>pilita.top().first){
                    before=pilita.top();
            pilita.pop();
            if(pilita.empty()) break;
            int dis= i-pilita.top().second-1;
            long long h=min(numbers[i],pilita.top().first) - before.first;
            ans+= dis*h;
            before=pilita.top();
        }
        pilita.push({numbers[i],i});
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
