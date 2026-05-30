//
// Created by Yair on 5/11/2026.
//
#include <bits/stdc++.h>

using namespace std;

using ll=long long;

void sol() {
    int numQueris, a,b;
    cin>>numQueris;

    stack<pair<ll,ll>> pilita;

    ll ans=-1;
    for (int i = 0; i < numQueris; ++i) {
        cin>>a>>b;
        pair<ll,ll> newPair; //first el numero y seecond la cantidad que hay
        newPair.first=b; newPair.second=a;
        ll restar=0;
        while (!pilita.empty()) {

            pair<ll,ll> topPila=pilita.top();
            //que pasa si es mayor y es diferente que el pair del top de la pila
            if (topPila.first!=newPair.first) {
                restar=max(restar,topPila.second);
                if (newPair.second >=restar) pilita.pop();
                else break;
            }else {
                pilita.pop();
                newPair.second= newPair.second+topPila.second-restar;
            }
        }
        pilita.push(newPair);
        ans=max(pilita.top().second,ans);
        cout<<ans<<" ";
    }
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t=1; cin>>t;

    while (t--) {
        sol();
    }
}