#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n,k; cin>>n>>k;
    vi prefixS(n+1);
    ll sum=0;
    prefixS[0]=0;
    for (int i = 0; i < n; ++i) {
        int num; cin>>num;
        num = num%k == 0 ? 1:0;
        prefixS[i+1]= prefixS[i]+ (num%k);
        prefixS[i+1]%=k;
    }

    map<int,int> cont;
    for (int num: prefixS) {
        cont[num]++;
    }

    for (auto num: cont) {

        sum+=1ll*num.second*(num.second-1)/2;
    }

    cout<<sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}