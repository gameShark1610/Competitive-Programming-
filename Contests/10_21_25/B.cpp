#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve()
{
    cout << "Hello, Competitive Programming!" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    vi part(20000001,0);
    int cont=0,skills=0;
    int a,b,t;
    int lol=t;
    cin >>t;
    while (t--)
    {
        cont++;
        cin>>a>>b;
        if(a==0 and b==0)
        {
            part[cont]=1;
        }
    }
    cont=0;
    while(lol--){
        cont++;
        if(part[a]==1 || part[b]==1){
            skills++;
            part[cont]=1;
        }

    }
    cout<<skills;


    return 0;
}
