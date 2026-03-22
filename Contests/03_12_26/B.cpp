
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n; cin>>n;
    //vector<pair<int,int>> pos(n+1);
    //vector<pair<int,int>> neg(n+1);

    vi pos(n+1);
    vi neg(n+1);

    vi memo(n+1);

    int num, maximo=INT_MIN;

    int indPos, inNeg;

    int maximoActual=INT_MIN, minimoActual=INT_MAX;

    pos(n+)
    for (int i = 2; i <=n ; i++)
    {
        cin>>num;

        if(num)
    }

    for (int i = n; i > 0; i--)
    {
        //cout<<i+nums[i]<<"\n";
        if(i+nums[i] > n){
            memo[i]=nums[i];
        }
        else{
            memo[i]=nums[i]+memo[nums[i]+i];
        }
        //cout<<memo[i]<<" ";
        maximo=max(maximo,memo[i]);
    }
    cout<<maximo<<"\n";
    }

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    //solve();

    return 0;
}
