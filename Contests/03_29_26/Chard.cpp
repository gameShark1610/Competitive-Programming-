#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pi = pair<int, int>;

void solve() {
    int n; cin>>n;
    vll a(n),b(n),c(n);
    for (int i{};i<n;i++) cin>>a[i];
    for (int i{};i<n;i++) cin>>b[i];

    vll primos={1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73};
    for (int i{};i<n;i++) {
        if (i==0) c[i]=gcd(a[0],a[1]);
        else if (i==n-1) c[i]=gcd(a[n-2],a[n-1]);
        else {
            c[i]=lcm(gcd(a[i],a[i-1]),gcd(a[i],a[i+1]));

        }
        if (c[i]>b[i]) c[i]=a[i];
    }
    ll numPrims=primos.size();

    vector<vector<ll>> dpesita(n, vector<ll>(numPrims,LONG_MIN));

    ll ans,ans2;
    for (int i=0;i<numPrims;i++) {

        if (i==0) {
            if (c[0]!=a[0]) dpesita[0][0]=1;
            else dpesita[0][0]=0;
            continue;
        }

        ans= c[0]*primos[i];
        if (ans<=b[0] && gcd(ans,c[1])==gcd(a[0],a[1]) && ans!=a[0]) dpesita[0][i]=1;
    }

    for (int i=1;i<n;i++) {
        for (int j=0;j<numPrims;j++) {
            for (int k=0;k<numPrims;k++) {
                if (j==0) {
                    if (c[i]!=a[i]) dpesita[i][j]=max(dpesita[i][j],dpesita[i-1][k]+1);
                    else dpesita[i][j]=max(dpesita[i][j],dpesita[i-1][k]);
                    continue;
                }

                ans=c[i]*primos[j];
                ans2=c[i-1]*primos[k];
                if (ans<=b[i] && gcd(ans,ans2)==gcd(a[i],a[i-1]) && ans!=a[i]) {
                    if (i<n-1) {
                        if (gcd(ans,c[i+1])==gcd(a[i],a[i+1])) dpesita[i][j]=max(dpesita[i][j],dpesita[i-1][k]+1);
                    }
                    else dpesita[n-1][j]=max(dpesita[n-1][j],dpesita[n-2][k]+1);

                }


            }


        }

    }

    ll finalAns= max(0LL, *ranges::max_element(dpesita[n-1]));
    cout<<finalAns<<'\n';


}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
