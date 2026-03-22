#include<bits/stdc++.h>

using namespace std;

void sol()
{
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i{}; i<n; i++)
    {
        cin>>a[i];
    }

    int restar;
    int minDistance=INT_MAX;
    for(int i=1; i<n; i++)
    {
        if(a[i-1]>a[i])
        {
            cout<<0<<'\n';
            return;
        }
        else
        {
            restar=a[i]-a[i-1];
            restar=restar/2+1;
            minDistance=min(minDistance,restar);

        }
    }
    cout<<minDistance<<'\n';


}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
