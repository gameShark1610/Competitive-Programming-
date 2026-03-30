#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n; cin>>n;
    vi a(n);
    vi b(n);
    int number;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=0;i<n;i++) {
        cin>>b[i];
    }
    int cont=0;


    int pre_gcdito;
    for (int i=n-1;i>0;i--) {
        int gcdito;
        gcdito=gcd(a[i],a[i-1]);
        if (i==n-1) {
            if (gcdito!=a[n-1]) {
                cont++;
            }
        }
        else {
            int gcdito2;
            gcdito2=gcd(gcdito,pre_gcdito);
            if (gcdito==gcd(gcdito2,a[i-1]) && pre_gcdito==gcd(gcdito2,a[i+1])  && gcdito2<a[i]) cont++;
        }
        pre_gcdito=gcdito;

    }
    int gcdito;
    gcdito=gcd(a[0],a[1]);
    if (gcdito<a[0]) {
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
