#include <bits/stdc++.h>

using namespace std;

void sol()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(b==1 && c==1)
    {
        cout<<"NO"<<'\n';
        return;
    }
    else if(c!=1)
    {
        vector<int> nums(a,1);
        cout<<"Yes"<<'\n';
        cout<<nums.size()<<'\n';
        for(int nu:nums) cout<<nu<<" ";
        cout<<'\n';
        return;
    }
    else if(a%2==0)
    {
        vector<int> nums(a/2,2);
        cout<<"Yes"<<'\n';
        cout<<nums.size()<<'\n';
        for(int nu:nums) cout<<nu<<" ";
        cout<<'\n';
        return;
    }
    else if(b>2)
    {
        vector<int> nums;
        nums.push_back(3);
        a-=3;
        if(a!=0)
        {
            for(int i{}; i<a/2; i++) nums.push_back(2);
        }
        cout<<"Yes"<<'\n';
        cout<<nums.size()<<'\n';
        for(int nu:nums) cout<<nu<<" ";
        cout<<'\n';
        return;
    } else cout<<"NO"<<'\n';
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
