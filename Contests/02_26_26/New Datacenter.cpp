#include <bits/stdc++.h>

using namespace std;

vector<int> resultados;

void bsf(int nodo, vector<vector<int>>& grafo){
    vector<int> visitados(2*1e5+1,0);
    queue<int> q;
    visitados[nodo]=1;
    q.push(nodo);

    int maxDistancia=1;
    int nodoActual=1;

    while(!q.empty()){
        nodoActual=q.front();
        q.pop();
        for(int nodoLevel:grafo[nodoActual]){
            if(visitados[nodoLevel]==0){
                visitados[nodoLevel]=visitados[nodoActual]+1;
                q.push(nodoLevel);
                maxDistancia=max(maxDistancia, visitados[nodoLevel]);
            }
        }
    }
    vector<int> answer;
    for(int i=1;i<visitados.size();i++){
        if(visitados[i]==maxDistancia) answer.push_back(i);
    }

    cout<<answer.size()<<'\n';
    for(int num:answer) cout<<num<<" ";
}

void sol(){
    int n,m; cin>>n>>m;
    int u,v;
    int dataCenter;
    vector<vector<int>> graph(2*1e5+1);

    for(int i{};i<m;i++){
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cin>>dataCenter;

    bsf(dataCenter,graph);
}


int main(){
    sol();
}

