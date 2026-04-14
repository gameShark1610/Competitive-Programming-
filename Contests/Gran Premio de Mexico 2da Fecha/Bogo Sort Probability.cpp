#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

constexpr ll mod = 1e9 + 7;
constexpr ll nMaxima = 1e6;

vector<ll> factorial(1e6+1);
vector<ll> factorialInverso(1e6+1);

ll exponenciaBinaria(ll numero, ll exponente) {
    long long answerd = 1;
    while (exponente > 0) {
        if (exponente & 1) {
            answerd = answerd * numero % mod;
        }
        numero= numero*numero % mod;
        exponente >>= 1;
    }
    return answerd;
}

void init() {
    factorial[0]=1;
    factorialInverso[0]=1;
    for (ll i = 1; i <= nMaxima; ++i) {
        factorial[i]=i*factorial[i-1]%mod;
    }
    factorialInverso[nMaxima]=exponenciaBinaria(factorial[nMaxima],mod-2);
    for (ll i = nMaxima-1; i >0; --i) {
        factorialInverso[i]=(i+1)*factorialInverso[i+1] %mod;
    }
}

void solve() {
    init();

    ll n, k;
    cin >> n >> k;
    map<ll,ll> frecuencia;
    vector<ll> numeros(n);
    for (int i = 0; i < n; ++i) {
        ll num; cin>>num;
        numeros[i]=num;
        frecuencia[num]++;
    }

    ll p=1;
    for (auto num: frecuencia) {
        p=p*factorial[num.second]%mod;
    }
    //calculando p^(10^9 + 7) con exponenciacion binaria
    ll q = factorialInverso[n];

    ll ans=p*q%mod;
    cout<<ans<<'\n';

    while (k--) {
        int a,b; cin>>a>>b;
        ll division=exponenciaBinaria( frecuencia[numeros[a-1]],mod-2);

        ans= ans*division%mod;
        frecuencia[numeros[a-1]]--;
        frecuencia[b]++;
        numeros[a-1]=b;

        ans=ans*frecuencia[b]%mod;
        cout<<ans<<'\n';
    }

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
