#include <bits/stdc++.h>

using namespace std;


void sol()
{
    int tam;
    cin>>tam;
    vector<long long> nums(tam);
    vector<long long> b;
    vector<long long> c;
    for(int i{}; i<tam; i++)
    {
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());

    b.push_back(nums[0]);
    int i=1;
    int flag=0;
    while(i<tam)
    {
        if(nums[i-1]==nums[i])
        {
            b.push_back(nums[i]);
            i++;
        }
        else break;
    }
    if(i==tam)
    {
        cout<<-1<<'\n';
        return;
    }
    for(i;i<tam; i++)
    {
        c.push_back(nums[i]);
    }


    cout<<b.size()<<" "<<c.size()<<'\n';
    for(auto in:b) cout<<in<<" ";
    cout<<'\n';
    for(auto in:c) cout<<in<<" ";
    cout<<'\n';
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
