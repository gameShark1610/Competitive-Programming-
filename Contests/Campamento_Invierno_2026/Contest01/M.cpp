#include <bits/stdc++.h>

using namespace std;

const int MAX= 150001;

vector<int> graph[MAX+1];
vector<bool> visitados(MAX+1,false);

long long numNodos;
long long numEnlaces;

void dfs(int nodo){

    for(auto xd: graph[nodo]){
        if(!visitados[xd]){
            visitados[xd]=true;
            numNodos++;
            numEnlaces+=graph[xd].size();
            dfs(xd); 
        }
        
    }
}
//3 nodos, cada uno tiene 2 conexiones porque todo con todo, es decir, 
// con 3 nodos, hay 2*3, que pasa si hay 5 nodos, cada uno debe de tener 4 conexiones
// entocnes, va a ver 4*5
void sol(){
    int n,m; cin>>n>>m;

    //limipiamos
    for(int i=1; i<=n; i++) {
     graph[i].clear();
     visitados[i]=false;   
    }

    int a,b;
    for(int i=0; i<m; i++) {
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=1; i<=n; i++) {
       if(visitados[i]==false){
        numNodos=1;
        numEnlaces=graph[i].size();
        visitados[i]=true;
        dfs(i);
        if(numEnlaces!=numNodos*(numNodos-1)){
            cout<<"NO";
            return;
        }
       }
    }
    cout<<"YES";



}

int main(){
    sol();
    return 0;
}