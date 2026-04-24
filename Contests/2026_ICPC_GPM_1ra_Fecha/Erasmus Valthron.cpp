#include <bits/stdc++.h>

using namespace std;

vector<int> primoPequeno(1e6+1);
vector<pair<vector<int>,int>> num(1e6+2);

void lowestPrimeSieve(int n) {
    iota(primoPequeno.begin(),primoPequeno.end(),0);
    for (int i = 4; i <= n; i +=2) primoPequeno[i]=2;
    for (int i = 3; i*i <= n; i +=2)
        if (primoPequeno[i] == i)
            for (int j = i*i; j <= n; j += 2*i)
                primoPequeno[j] = min(primoPequeno[j],i);
}


void sol(){
    int n,q; cin>>n>>q;

    lowestPrimeSieve(1e6);

    num[1].second=1;
    //calculo de los primos
    for (int i = 2; i <= n; ++i)
    {
        int numer = i;
        num[i].second=numer;
        while (numer>1) {
            num[i].first.push_back(primoPequeno[numer]);
            numer/=primoPequeno[numer];
        }
    }


    sort(num.begin()+1,num.begin()+n+1);

    for (int i = 0; i < q; ++i) {
        int query; cin>>query;
        cout<<num[query].second<<"\n";
    }


}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while (t--) sol();
    return 0;
}
