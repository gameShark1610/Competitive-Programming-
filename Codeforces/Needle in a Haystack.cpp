#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>



using namespace std;

string sol();
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string resultado=sol();
        cout<<resultado<<"\n";
    }


    return 0;
}

string sol()
{
    int letras=0;
    string a;
    cin>>a;
    unordered_map<char,int> mapa;
    for(int i=0; i<a.length(); i++)
    {
        if(mapa.find(a[i])!=mapa.end()) mapa[a[i]]++;
        else
        {
            mapa[a[i]]=1;
            letras++;
        }
    }


    string b,bSinLetras="";
    cin>>b;
    for(int i=0; i<b.length(); i++)
    {
        if(mapa.find(b[i])!=mapa.end())
        {
            mapa[b[i]]--;
            if(mapa[b[i]]==0){
                letras--;
            }else if(mapa[b[i]]<0) bSinLetras+=b[i];
        } else bSinLetras+=b[i];
    }

    if(letras) return "Impossible";

    string resultado="";
    sort(bSinLetras.begin(),bSinLetras.end());

    int i=0,j=0;
    //cout<<bSinLetras<<"\n";
    while(i<a.length() || j<bSinLetras.length()){
            if(i>=a.length()){
                resultado+=bSinLetras[j++];
            }else if (j>=bSinLetras.length()){
                resultado+=a[i++];
            }
            else if(a[i]<=bSinLetras[j])
            resultado+=a[i++];
            else resultado+=bSinLetras[j++];
    }

    return resultado;
    //cout<<bSinLetras<<" "<<letras;
}
