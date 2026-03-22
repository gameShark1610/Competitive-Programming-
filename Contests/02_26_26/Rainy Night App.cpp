    #include <bits/stdc++.h>

    using namespace std;

    int cont;
    vector<int> NumGraph(200001,0);

    void dfs(int nodoActual,int nodoBuscar, vector<vector<int>>& graph, vector<bool>& visitados)
    {
        NumGraph[nodoActual]=cont;
        visitados[nodoActual]=true;
        for(int vecino:graph[nodoActual])
        {
            if(!visitados[vecino]) dfs(vecino,nodoBuscar, graph,visitados);

            /*{
            if(dfs(vecino,nodoBuscar, graph,visitados))
                return true;
            }
            }
            return false;
            */
        }
    }

    void sol()
    {
        int n,m,u,v;
        cin>>n>>m;
        vector<vector<int>> graph(200001);
        vector<bool> visitados(200001);
        cont=1;
        for(int i{}; i<m; i++)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int q,a,b;
        cin>>q;
        for(int i{}; i<q; i++)
        {
            cin>>a>>b;
            if(NumGraph[a]==0 && NumGraph[b]==0)
            {
                dfs(a,b,graph,visitados);
                cont++;

            }
            //cout<<NumGraph[a]<<" "<<NumGraph[b];

            if(NumGraph[a]==NumGraph[b]) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }




    }


    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        sol();
    }
