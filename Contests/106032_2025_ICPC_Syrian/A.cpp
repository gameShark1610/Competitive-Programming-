#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    ll a, b;
    cin >> a >> b;
    ll sumTotal = 0;
    vector<ll> c(a), nuevoGuardado;
    for (ll i = 0; i < a; ++i) {
        ll num;
        cin >> num;
        c[i] = num;
    }
    //cout<<sumTotal;
    int contNoD = 0, conD = 0;
    for (int i = a - 1; i >= 0; --i) {
        if (c[i] % b == 0) {
            if (contNoD != 0) {
                nuevoGuardado.push_back(contNoD);
                sumTotal += contNoD * (contNoD + 1) / 2;
                contNoD = 0;
            }
            conD--;
            nuevoGuardado.push_back(conD);
        } else contNoD++;
    }
    if (contNoD != 0) {
        nuevoGuardado.push_back(contNoD);
        sumTotal += contNoD * (contNoD + 1) / 2;
    }
    //for (auto xd: nuevoGuardado) cout<<xd<<" ";

    //cout<<sumTotal<<" ";

    for (long long i = nuevoGuardado.size() - 1; i >= 0; --i) {
        if (nuevoGuardado[i] > 0) continue;
        ll numCom = -1 * nuevoGuardado[i] / b;
        sumTotal += numCom;
        if (i != nuevoGuardado.size() - 1) {
            if (nuevoGuardado[i+1]>0) sumTotal += numCom* (nuevoGuardado[i +1]);
        }

        if (i-b>=0) {
            if (nuevoGuardado[i-b]>0)sumTotal += numCom* (nuevoGuardado[i - b]);
        }

        if (i-b>=0 && i!=nuevoGuardado.size()-1) {
            if (nuevoGuardado[i-b]>0 && nuevoGuardado[i+1]>0) {
                sumTotal += (nuevoGuardado[i +1])*(nuevoGuardado[i - b]);
            }
        }
    }
    cout << sumTotal;
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
