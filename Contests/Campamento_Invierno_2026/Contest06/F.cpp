#include <bits/stdc++.h>

using namespace std;

void sol()
{
    int n; cin>>n;
    vector<int> dados(n);
    for(auto &i: dados) cin>>i;

    if(n==1){
        cout<<60<<" "<<156;
        return;
    }
    if(n==2){
        if(dados[0]!=dados[1]){
            cout<<12<<" "<<24;
        }else{
            cout<<0<<" "<<36;
  
        }
    }
    if(n==3){
        if(dados[0]==dados[1] || dados[0]==dados[2] || dados[1]==dados[2]){
            cout<<0<<" "<<6;
            return;
        }
        cout<<3<<" "<<3;
            return;
    }
    
}
int main()
{
    sol();
}