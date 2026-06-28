//
// Created by Yair on 5/5/2026.
//

#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void sol() {
    ll n,x; cin>>n>>x;

    vector<long long> modulosX(x,0);
    for (int i = 0; i < n; ++i) {
        int num; cin>>num;
        num%=x;
        modulosX[num]++;
    }

    long long ans=0;
    for (int i = 1; i <= x/2; ++i) {
        ll complemento=x-i;
        if ((complemento*i*1ll)%x == 0) {

            if (i<complemento) ans+=modulosX[i]*modulosX[x-i];
            else if (i==complemento)ans+=(modulosX[i]*(modulosX[i]-1))/2;
        }
    }

    ans+=(modulosX[0]*(modulosX[0]-1))/2;

    cout<<ans;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t=1; //cin>>t;
    while (t--) {
        sol();
    }
}