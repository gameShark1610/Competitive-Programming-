#include <bits/stdc++.h>

using namespace std;

void sol() {
    int n; cin>>n;
    string word; cin>>word;
    int i=0;
    if (n%2!=0) {
        i=1;
        if (word[0]=='b') {
            cout<<"No"<<'\n';
            return;
        }
    }
    for (i;i<n;i+=2) {
        if (word[i]!='?')
            if (word[i]==word[i+1]) {
                cout<<"No"<<'\n';
                return;
            }
    }

    cout<<"Yes"<<'\n';
}

int main() {
    int t=1;
    cin>>t;
    while (t--) {
        sol();
    }
}