//
// Created by Yair on 5/28/2026.
//

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n; cin>>n;
    long long needed=0;
    int cont1=0, contExtraNum=0;
    long long ans=0;
    for (int i = 0; i < n; ++i) {
        int number; cin>>number;
        if (number==1) cont1++;
        else {
            contExtraNum++;
            ans+=number;
            needed+=number/2-1;
        }
    }

    if (n==1 && ans<3) {
        cout<<0<<'\n';
        return;
    }

    if (contExtraNum==0) cout<<0<<'\n';
    else if (contExtraNum==1) {
        if (ans<2) cout<<0<<'\n';
        else {
            needed=ans/2;
            if (cont1>=needed) ans+=needed;
            else ans+=cont1;
            cout<<ans<<'\n';
        }
    }else {
        if (cont1>=needed) ans+=needed;
        else ans+=cont1;
        cout<<ans<<'\n';
    }
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
