#include <bits/stdc++.h>

using namespace std;



void sol(){
  int n,m; cin>>n>>m;
  vector<string> grid(n);
  vector<vector<int>> visitado(n,vector<int> (m,-1));

  for(int i=0; i<n; i++) cin>>grid[i];

  int dr[]= {1,-1, 0, 0};
  int dc[]= {0,0,1,-1};

  
  queue<pair<int,int>> q;
  q.push({0,0});
  visitado[0][0]=0;

  while(!q.empty()){
    //cout<<"xd";
    auto [r,c]=q.front();
    q.pop();
    int mult=grid[r][c]-'0';
    //recorridos
    for(int i=0; i<4; i++){
      int nr= r+dr[i]*mult;
      int nc= c+dc[i]*mult;

      if(nr<0 || nr>n-1 || nc<0 || nc>m-1) continue;
      if(visitado[nr][nc]==-1){
        visitado[nr][nc]=visitado[r][c]+1;
        q.push({nr,nc});   
      }else continue;
    }
  }
  if(visitado[n-1][m-1]==-1)
  cout<<"IMPOSSIBLE"; else cout<<visitado[n-1][m-1];



}

int main(){
  sol();
}