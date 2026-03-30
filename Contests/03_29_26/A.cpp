#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n; cin>>n;
    vi nums(n+1);
    int number;
    for (int i=1;i<=n;i++) {
        nums[i]=i;
    }
    sort(nums.begin(),nums.end(), greater<int>());

    for (int i=0;i<n;i++) {
        cout<<nums[i]<<" ";
    }
    cout<<'\n';



}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}
