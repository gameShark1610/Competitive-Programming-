#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Nodo{
    map<char,Nodo*>sig;
};
void solve(){
string s,s2; cin >> s>>s2;
    int k; cin >> k;
    Nodo *raiz =new Nodo();
    ll ans{};
    for(int i{};i  < (int)s.length();++i){
        Nodo *act =raiz;
        int limit{};
        for(int j=i; j < s.length();++j){
            if(s2[s[j]-'a']=='0')
                ++limit;
            if(limit>k)break;
            if(!act->sig.count(s[j])){
                act->sig[s[j]]=new Nodo();
                ans++;
            }
            act=act->sig[s[j]];

        }
    }
    cout << ans;
}

int main(){
     ios_base::sync_with_stdio(0);cin.tie(0);
    /*
    int t;
    cin >> t;
    while (t--) {
        solve();
    }*/

    solve();

    return 0;
}
