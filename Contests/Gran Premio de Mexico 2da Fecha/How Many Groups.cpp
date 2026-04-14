#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

vector<int> gruposFreq(1e6 + 1);
vi ans(1e6 + 1);

void dfs(int cont, int jefe, vi &grupos, vector<vector<int> > &empresa) {
    int grupo = grupos[jefe];
    if (gruposFreq[grupo] == 0) cont++;
    gruposFreq[grupo]++;
    ans[jefe]=cont;

    for (int empleados: empresa[jefe]) {
        dfs(cont, empleados, grupos, empresa);
    }

    gruposFreq[grupo]--;
}

void solve() {
    int n;
    cin >> n;
    vector<vector<int> > empresa(n + 1);
    vi grupos(n + 1);

    int jefeFinal;
    for (int i = 1; i <= n; ++i) {
        int num;
        cin >> num;
        if (num == 0) jefeFinal = i;
        empresa[num].push_back(i);
    }
    for (int i = 1; i <= n; ++i) cin >> grupos[i];

    for (int subJefazos: empresa[0])
    dfs(0, subJefazos, grupos, empresa);

    for (int i = 1; i <= n; ++i) {
        cout<<ans[i]<<" ";
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
