#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;


int bfs(int inicio, int nodos, vector<vector<int>>& vectorsito){
    vector<bool> visitado(nodos, false);
    queue<int> colita;
    int cont=0;

    visitado[inicio] = true;
    colita.push(inicio);

    while(!colita.empty()){
        int u= colita.front();
        colita.pop();

        for(int v;vectorsito[u]){
            if(!visitado[v]){
                visitado[v]=true;
                colita.push(v);
            }
        }
        cont++;
    }
    return cont;
}

void solve() {
    int num; cin>>num;
    vi numeros;
    vector<vector<int>> listaAd(num);

    int a;
    for(int i=1;i<=num;i++){
        cin>>a;
        numeros.push_back(a);
        listaAd[a].push_back(i);
    }

    for(int i{};i<num;i++)
    while(true){
        listaAd[numeros[i]];
        if()

    }
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
