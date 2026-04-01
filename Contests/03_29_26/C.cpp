#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pi = pair<int, int>;


ll findNumberInLcm(ll gcd, ll b,ll b2, ll limit) {
    ll i=gcd*2;
    while (i<=limit) {
        ll ans1; ans1=i*b/lcm(i,b);
        ll ans2; ans2=i*b2/lcm(i,b2);
        if (ans1==gcd && ans2==gcd) return i;
        i+=gcd;
    }
    return limit+1;
}

void solve() {
    ll n;
    cin >> n;
    vll a(n);
    vll b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int cont = 0;


    ll pre_gcdito;
    for (ll i = n - 1; i > 0; i--) {
        ll gcdito;
        gcdito = gcd(a[i], a[i - 1]);
        if (i == n - 1) {
            ll ans; ans=gcdito;
            if (gcdito==a[i]) ans=findNumberInLcm(gcdito, a[i-1], a[i-1], b[i]);
            if (ans <= b[i]) {
                a[i]=ans;
                cont++;
            }
        } else {
            ll lcm;
            lcm = gcd(gcdito, pre_gcdito);
            lcm = (gcdito / lcm) * pre_gcdito;
            if (lcm==a[i]) lcm=findNumberInLcm(lcm, a[i+1],a[i-1], b[i]);
            if (lcm <= b[i]) {
                a[i]=lcm;
                cont++;
            }
        }
        pre_gcdito = gcdito;
    }
    ll gcdito;
    gcdito = gcd(a[0], a[1]);
    if (gcdito==a[0]) gcdito=findNumberInLcm(gcdito, a[1], a[1], b[0]);
    if (gcdito <= b[0]) cont++;

    cout << cont << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}
