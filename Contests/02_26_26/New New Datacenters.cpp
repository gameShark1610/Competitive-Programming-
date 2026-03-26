#include <bits/stdc++.h>

using namespace std;

vector<int> resultados;
vector<int> visitados(2*1e5+1,0);
vector<int> centrosDatos(2*1e5+1,0);
int maxDistancia;

void bsf(vector<vector<int>>& grafo)
{
    queue<int> q;
    for(int i=1;i<centrosDatos.size();i++){
        if(centrosDatos[i]){
            visitados[i]=1;
            q.push(i);
        }
    }
    int nodoActual;
    while(!q.empty())
    {
        nodoActual=q.front();
        q.pop();
        for(int nodoVecino:grafo[nodoActual])
        {
            if(visitados[nodoVecino]==0)
            {
                visitados[nodoVecino]=visitados[nodoActual]+1;
                q.push(nodoVecino);
                maxDistancia=max(maxDistancia, visitados[nodoVecino]);
            }
        }
    }

}

void sol()
{
    int n,m;
    cin>>n>>m;
    int u,v;
    int dataCenter,numDatacentes;
    vector<vector<int>> graph(2*1e5+1);

    for(int i{}; i<m; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    maxDistancia=1;

    cin>>numDatacentes;
    for(int i{}; i<numDatacentes; i++)
    {
        cin>>dataCenter;
        centrosDatos[dataCenter]=1;
    }
    bsf(graph);

    vector<int> answer;
    for(int i=1; i<visitados.size(); i++)
    {
        if(visitados[i]==maxDistancia) answer.push_back(i);
    }
    cout<<answer.size()<<'\n';
    for(int num:answer) cout<<num<<" ";



}


int main()
{
    sol();
}


