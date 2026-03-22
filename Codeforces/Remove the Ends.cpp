    #include <bits/stdc++.h>

    #include <iostream>

    #define nl "\n"
    using namespace std;

    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin>>t;
        while(t--)
        {
            long long n,num;
            cin>>n;
            vector<long long> ori(n+1);
            vector <long long> a(n+1);
            vector <long long> b(n+1);
            cin>>num;
            a[1]= num > 0 ? num:0;
            ori[1]=num;
            for(int i=2; i<=n; i++)
            {
                cin>>num;
                ori[i]=num;
                a[i]= num>0  ? (a[i-1]+num):a[i-1];
            }


            b[n]= ori[n] < 0 ? abs(ori[n]):0;
            for(int i=n-1; i>0; i--)
            {
                b[i]= ori[i]<0  ?  (b[i+1]+abs(ori[i])):b[i+1];
            }
            long long maximo=0;
            for(int i=1; i<=n; i++)
            {
                maximo=max(maximo, a[i]+b[i]);
            }
            cout<<maximo<<nl;
        }
        return 0;
    }
