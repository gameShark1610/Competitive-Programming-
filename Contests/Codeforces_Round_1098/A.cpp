//
// Created by gameshark on 5/22/26.
//
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n; cin>>n;

    vector<ll> a(n);
    vector<ll> ans;
    for (int i = 0; i < n; ++i) cin>>a[i];

    int num=0;
    for (int i = n-1; i >= 0; --i) {
        if (num==0) {
            if (a[i]>0) {
                num++;
                ans.push_back(i+1);
                //cout<<i<<" ";
            }
        }else {
            if ( a[i]*(pow(-1,num))>0 ) {
                num++;
                ans.push_back(i+1);
            }
        }
        //if (a[i]*(-1*num))
    }
    cout<<ans.size()<<'\n';
    for (int xd: ans) cout<<xd<<" ";

    cout<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}