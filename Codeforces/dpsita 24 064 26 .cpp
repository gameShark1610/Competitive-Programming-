#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;
int mod= 998244353;


vector<vector<int>> dpsita(25001, vector<int> (2501,0));

int dp(int n, int a)
{
    if (n==0) return 1;
    if (n<1) return 0;

    for (int i = a; i < n; ++i)
    {

    }

}

void solve() {
    int n, k; cin>>n>>k;

    int answer=dp(n,0);
    cout<<answer;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
