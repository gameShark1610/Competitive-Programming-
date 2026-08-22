#include <bits/stdc++.h>

using namespace std;

void sol()
{
    int a; cin>>a;
    string s; 
    s=to_string(a);
    if(s.size()>9){
        cout<<-1;
        return;
    }
    for(int i=0; i< s.size();i++){
        int num=s[i]-'0';
        if(num != i+1){
            cout<<-1;
            return;
        }
    }
    cout<<s[s.size()-1];
    
}
int main()
{
    sol();
}