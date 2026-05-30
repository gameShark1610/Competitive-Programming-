//
// Created by gameshark on 5/22/26.
//

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;



void solve() {
    string n; cin>>n;
    int nleng=n.size();
    vi prefix(nleng),sufiix(nleng);
    prefix[0]=n[0]=='1' || n[0]=='3' ? 1:0;
    int cont4=0;
    if (n[0]=='4') cont4++;
    for(int i = 1; i < nleng; ++i) {
        if (n[i]=='4') cont4++;
        if (n[i]=='1' || n[i]=='3') {
            prefix[i]=prefix[i-1]+1;
        }else prefix[i]=prefix[i-1];
    }

    sufiix[nleng-1]= n[nleng-1]=='2' ? 1:0;
    for(int i = nleng-2; i >= 0; --i) {
        if (n[i]=='2') {
            sufiix[i]=sufiix[i+1]+1;
        }else sufiix[i]=sufiix[i+1];
    }
    int mini=min(prefix[nleng-1],sufiix[0]);
    for(int i = 0; i < nleng-1; ++i) {
        mini=min(mini,prefix[i]+sufiix[i+1]);
    }


    //for (int num: sumas) cout<<num<<" ";
    //cout<<"\n";

    cout<<mini+cont4<<'\n';



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

