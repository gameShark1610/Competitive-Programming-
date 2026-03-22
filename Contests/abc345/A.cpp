#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    cout << "Hello, Competitive Programming!" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    string x;
    cin>>x;
    char letra;
    if(x[0]==x[1]) letra=x[0];
    else if(x[1]==x[2]) letra=x[1];
    else letra=x[2];
    for(int i=0;i<x.length();i++){
        if(x[i]!=letra)
        cout<<i+1;

    }
    /*
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    */
    //solve();

    return 0;
}
