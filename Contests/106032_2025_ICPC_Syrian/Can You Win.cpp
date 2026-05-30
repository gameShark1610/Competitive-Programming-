//
// Created by Yair on 5/5/2026.
//
#include <bits\stdc++.h>

using namespace std;

using ll= long long;

void sol() {
    int l; cin>>l;
    vector<ll> levels(l);


    for (int i = 0; i < l; ++i) {
        ll num; cin>>num;
        levels[i]= (num&1) == 0 ? 0:1; //0 es par, 1 es impar
    }

    vector<bool> ans(l);

    ans[l-1]= levels[l-1]==0 ? false:true; //si el nivel es par, importa llegar segundo (false) si es impar, primero (true)
    for (int i = l-2; i >= 0; --i) {
        if (ans[i+1]) ans[i]=false; //si quieres llegar primero, entonces tienes que llegar segundo a este nivel
        else { //si ocupas llegar segundo va a depende de que haya adentro
             ans[i]= levels[i]==0 ? false:true;
        }
    }

    ans[0]? cout<<"Second"<<"\n":cout<<"First"<<"\n";


}

int main() {
    int t=1; cin>>t;

    while (t--) {
        sol();
    }

}