#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;


struct kmp {
    vector<int> aux;
    vector<int> pattern;

    kmp(vi pattern) {
        this->pattern=pattern;
        aux.resize(pattern.size());
        int i=1,j=0;
        while (i<pattern.size()) {
            if (pattern[i]==pattern[j])
                aux[i++]=++j;
            else {
                if (j==0) aux[i++]=0;
                else j=aux[j-1];
            }
        }
    }

    vector<int> search(vector<int>& texto) {
        vector<int> ans;
        int i=0,j=0;
        while (i<texto.size() && j<pattern.size()) {
            if (texto[i] == pattern[j]) {
                ++i; ++j;
                if (j==pattern.size()) {
                    ans.push_back(i-j);
                    j = aux[j-1];
                }
            }else {
                if (j==0) ++i;
                else j=aux[j-1];
            }
        }
        return ans;
    }
};


void solve() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    vi b(k);
    vi a1(n-1);
    vi b1(k-1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i > 0) {
            a1[i - 1] = a[i - 1] - a[i];
        }
    }
    for (int i = 0; i < k; ++i) {
        cin >> b[i];
        if (i > 0) {
            b1[i - 1] = b[i - 1] - b[i];
        }
    }

    if (n==1) {
        cout<<k;
        return;
    }

    kmp patron(a1);
    vi ans=patron.search(b1);
    cout<<ans.size();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
