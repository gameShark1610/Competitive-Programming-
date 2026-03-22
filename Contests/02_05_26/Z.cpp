#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;


string recursion(ll num)
{
    ll numDiv;
    numDiv=num;
    if(num==1) return "2";
    if(numDiv%2==1)
    {
        numDiv=num-1;
        return "(2*"+recursion(numDiv)+")";
    }
    numDiv=num/2;
    return "("+recursion(numDiv)+")^2";

}

void solve()
{
    ll num;
    cin>>num;
    string answ;
    answ=recursion(num);
    cout<<answ<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }


    return 0;
}
