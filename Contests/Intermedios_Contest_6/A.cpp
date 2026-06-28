//
// Created by Yair on 6/11/2026.
//

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;


void dfs(vector<vector<ll>>& graph,ll nodoActual, ll& contMenos, vector<pair<ll,ll>>& validScores,vector<ll>& grphScores ) {
    //visitados[nodoActual]=0;
    if (grphScores[nodoActual]==-1) {
        contMenos++;
        grphScores[nodoActual]=0;
    }
    else {
        pair<ll,ll> newAns;
        newAns.first=nodoActual;
        newAns.second=grphScores[nodoActual];
        validScores.push_back(newAns);
    }

    for (ll nodoSiguiente: graph[nodoActual]) {
            dfs(graph,nodoSiguiente,contMenos,validScores, grphScores);

    }
}

void solve() {
    ll m,n; cin>>n>>m;
    vector<vector<ll>> graph(n+1);
    vector<ll> grphScores(n+1);

    for (int i = 1; i <= n; ++i) {
        cin>>grphScores[i];
    }

    for (int i = 0; i < m; ++i) {
        ll a,b; cin>>a>>b;
        graph[a].push_back(b);
    }
    //vector<ll> visitados(n+1,-1);
    ll finalAnswer=0;

    for (int i = 1; i <= n; ++i) {
        vector<pair<ll,ll>> validScores;
        ll contMenos=0;
        dfs(graph,i,contMenos,validScores, grphScores);
        sort(validScores.begin(), validScores.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {return a.second>b.second;});
        for (auto currentScore: validScores) {
            if (contMenos>0) {
                finalAnswer+=currentScore.second;
                grphScores[currentScore.first]=0;
                contMenos--;
                }else break;
            }
    }

    cout<<finalAnswer<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
