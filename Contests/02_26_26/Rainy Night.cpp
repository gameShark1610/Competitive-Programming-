#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

set<bool> visitados;

int dfs(int nodo,int nodoBuscar, map<int,vector<int>>& grafo){
    if(nodo==nodoBuscar){
        return 1;
    }

    visitados.insert(nodo);
    for (int vecino : grafo[nodo]) {
        if (visitados.find(vecino)==visitados.end()) {
            if(dfs(vecino,nodoBuscar,grafo))
                return 1;
        }
    }
    return 0;
}

void solve() {
    int n,m; cin>>n>>m;
    int a,b; cin>>a>>b;

    map<int,vector<int>> grafito;
    int d1,d2;
    for(int i{};i<m;i++){
        cin>>d1>>d2;
        grafito[d1].push_back(d2);
        grafito[d2].push_back(d1);
    }
    int ans;
    ans = dfs(a,b,grafito);
    if(ans==1) cout<<"YES";
    else cout<<"NO";
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    /*
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    */
    solve();

    return 0;
}
