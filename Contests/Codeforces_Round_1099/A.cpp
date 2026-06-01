#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n,x,y,d;

    cin>>n>>x>>y>>d;

    //como saber si es imposible
    int ans1,ans2,ans3;
    if (abs(x-y)%d==0) {
        ans1 = abs(x-y)/d;
    }else ans1=INT_MAX;



    int cont2=0;
    int dist2=n-x;
    cont2+=(dist2)/d;
    if (dist2%d!=0) cont2++;
    if ((n-y)%d==0) ans2=cont2+(n-y)/d;
    else ans2=INT_MAX;

    int cont3=0;
    int dist3=x;
    cont3+=(dist3)/d;
    if (dist3%d!=0) cont3++;
    if ((y-1)%d==0) ans3=cont3+(y-1)/d;
    else ans3=INT_MAX;

    //cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<min(ans1,min(ans2,ans3))<<'\n';
    if (min(ans1,min(ans2,ans3))==INT_MAX) cout<<-1<<'\n';
    else cout<<min(ans1,min(ans2,ans3))<<'\n';

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
