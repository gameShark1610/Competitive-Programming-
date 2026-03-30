#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pi = pair<int, int>;

void solve() {
    ll n; cin>>n;
    vll a(n);
    vll b(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=0;i<n;i++) {
        cin>>b[i];
    }
    int cont=0;


    ll pre_gcdito;
    for (ll i=n-1;i>0;i--) {
        ll gcdito;
        gcdito=gcd(a[i],a[i-1]);
        if (i==n-1) {
            if (gcdito!=a[n-1]) {
                cont++;
            }
        }
        else {
            ll lcm;
            lcm=gcd(gcdito,pre_gcdito);
            lcm=(gcdito/lcm)*pre_gcdito;
            if (lcm<a[i]) cont++;
        }
        pre_gcdito=gcdito;

    }
    ll gcdito;
    gcdito=gcd(a[0],a[1]);
    if (gcdito!=a[0]) {
        cont++;
    }

    cout<<cont<<'\n';



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
