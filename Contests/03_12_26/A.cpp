
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int s, n;
    cin>>s>>n;
    vector<pair<int,int>> dragons(n);

    int x,y;
    for(int i{};i<n;i++){
        cin>>x>>y;
        dragons[i].first=x;
        dragons[i].second=y;
    }
    sort(dragons.begin(),dragons.end());

    int suma=s;
    for(auto xd: dragons) {
        if(s>xd.first){
            s+=xd.second;
        }
        else{ cout<<"NO";
        return;
        };
    }

    cout<<"YES";
    return;
    }

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    /*
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    */
    solve();

    return 0;
}
