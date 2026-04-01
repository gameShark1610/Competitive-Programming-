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
        if (i==0) c[i]=gcd(a[0],b[1]);
        else if (i==n-1) c[i]=gcd(a[n-2],a[n-1]);
        else {
            c[i]=lcm(gcd(a[i],a[i-1]),gcd(a[i],a[i+1]));
            if (c[i]>b[i]) c[i]=a[i];
        }
    }


}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
