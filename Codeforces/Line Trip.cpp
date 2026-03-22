#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        vector<int> n(a);
        for(int i=0; i<a; i++)
        {
            cin>>n[i];
        }

        int maxim=n[0];
        if(a==1)
            maxim=max(maxim,(b-n[0])*2);
        else
            for(int i=1; i<a; i++)
            {
                if(i==a-1) maxim=max(maxim,max((b-n[i])*2,n[i]-n[i-1]));
                else maxim=max(maxim,n[i]-n[i-1]);
            }
        cout<<maxim<<"\n";
    }
    return 0;
}
