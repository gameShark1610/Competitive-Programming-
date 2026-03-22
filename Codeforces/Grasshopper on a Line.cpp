#include <bits/stdc++.h>

using namespace std;

void sol()
{
    int a,b;
    cin>>a>>b;
    vector<int> vectorsito;
    if(b>a)
    {
        cout<<1<<'\n';
        cout<<a<<'\n';
        return;
    }
    if(a%b!=0)
    {
        cout<<1<<'\n';
        cout<<a<<'\n';
        return;
    }
    cout<<2<<'\n';
    cout<<a-1<<" "<<1<<'\n';
    return;



}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
        }

    }
