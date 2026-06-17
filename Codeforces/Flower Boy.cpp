//
// Created by gameshark on 01/06/2026.
//
#include <bits/stdc++.h>

using namespace std;


using ll=long long;


void sol() {
    int n,m; cin>>n>>m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; ++i) cin>>a[i];
    for (int i = 0; i < m; ++i) cin>>b[i];

    vector<int> prefixL(n,0),prefixR(n,0);
    int i,j;
    i=n-1;
    j=m-1;
    while (i>=0) {
        while (j>=0) {
            if (a[i]>=b[j]) {
                if (i==n-1) prefixR[i]=1;
                else prefixR[i]=prefixR[i+1]+1;
                j--;
                break;
            }else {
                if (i==n-1) prefixR[i]=0;
                else prefixR[i]=prefixR[i+1];
                break;
            }
        }
        i--;
    }

    i=0;
    j=0;
    while (i<n) {
        while (j<m) {
            if (a[i]>=b[j]) {
                if (i==0) prefixL[i]=1;
                else prefixL[i]=prefixL[i-1]+1;
                j++;
                break;
            }else {
                if (i==0) prefixL[i]=0;
                else prefixL[i]=prefixL[i-1];
                break;
            }
        }
        i++;
    }

    if (prefixR[0]==m || prefixL[n-1]==m) {
        cout<<0<<"\n";
        return;
    }
    if (prefixR[0]<m-1 && prefixL[n-1]<m-1) {
        cout<<-1<<"\n";
        return;
    }

    for (int i = 0; i < n; ++i) {

    }

    //for (int xd: prefixL) cout<<xd<<" ";
    cout<<"\n";

}

int main() {
    int t=1; cin>>t;
    while (t--) {
        sol();
    }
}