//
// Created by gameshark on 28/05/2026.
//
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    int n;cin>>n;
    string xd; cin>>xd;
    int i=0, j=n-1;
    int cont=0;
    while (i<j) {
        //encontramos el G mas cercano
        if (xd[i]=='G') {
            cont++;
            i++;
        }else {
            //encontramos una g
            if (xd[j]=='S')
                while (j>i) {
                    if (xd[j]=='G') break;
                    else j--;
                }
            if (xd[j]=='G') {
                swap(xd[i],xd[j]);
                cont++;
                i++;
                j--;
            }
        }
    }
    if (xd[i]=='G') cont++;
    cout<<cont<<'\n';

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
