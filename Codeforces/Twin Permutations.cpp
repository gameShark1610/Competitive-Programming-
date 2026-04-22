#include <bits/stdc++.h>

using namespace std;

void sol() {
    long long n,b; cin>>n>>b;

    if (n%2==0 || (n-b)%2==0) {
        cout<<"YES"<<'\n';
        return;
    }
    cout<<"NO"<<'\n';



}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) sol();

    return 0;
}
