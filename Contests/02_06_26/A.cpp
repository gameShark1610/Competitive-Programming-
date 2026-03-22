#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    ll a,b,c1=0,c2=0,c3=0,sum1=0;
    cin>>a>>b;
    c1=a/2;
    for(int i=1;i<c1;i++){
        sum1+=a%i;
    }

    //cout<<sum1;
    if(b>c1){
    ll gauss=a-c1-1;
    ll gaussRest=a-b;
    if(gaussRest<=0) c2=(gauss*(gauss+1))/2;
    else c2=((gauss*(gauss+1))-(gaussRest*(gaussRest+1)))/2;
    }

    //cout<<c2<<" ";
    c2%=1000000007;
    if(b>a)
    c3=a*(b-a);
    //cout<<c3;
    c3%=1000000007;
    cout<<(sum1+c2+c3)%(1000000007);
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

