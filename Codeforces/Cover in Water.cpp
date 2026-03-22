#include<bits/stdc++.h>

using namespace std;

int sol()
{
    int n;
    string palabra;
    cin>>n>>palabra;
    int seguidos=0,cont=0;
    if(palabra[0]=='.'){
        seguidos++;
        cont++;
    }
    for(int i=1; i<n; i++)
    {
        if(palabra[i]=='.' && palabra[i-1]=='.') seguidos++;
        else if(palabra[i]=='.' && palabra[i-1]=='#') seguidos=1;
        else seguidos=0;

        if(palabra[i]=='.'){
            cont++;
        }
        if(seguidos==3) return 2;
    }
    return cont;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<sol()<<"\n";
    }
    return 0;
}


