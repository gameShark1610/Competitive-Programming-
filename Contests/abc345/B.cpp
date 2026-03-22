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
    int p;
    cin>>p;
    int* juan= new int[p];
    for(int i=0;i<p;i++) cin>>juan[i];
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        for(int i=0;i<p;i++){
            if(juan[i]==a || juan[i]==b){
                cout<<juan[i]<<"\n";
                break;
            }
        }
        //solve();
    }

    //solve();

    return 0;
}
