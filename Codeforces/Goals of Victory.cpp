#include <bits/stdc++.h>
using namespace std;

void sol(){
    int cont=0,sum=0;
    string line1;
    for(int i=1;i<=10;i++){
        cin>>line1;
        for(int j=1;j<=10;j++){
            if(line1[j-1]=='X'){
                if(i>4 && i<7 && j>4 && j<7){
                    sum+=5;
                }
                else if(i>3 && i<8 && j>3 && j<8){
                    sum+=4;
                }
                else if(i>2 && i<9 && j>2 && j<9){
                    sum+=3;
                }
                else if(i>1 && i<10 && j>1 && j<10){
                    sum+=2;
                }
                else sum+=1;
            }
        }

    }
    cout<<sum<<'\n';



}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    int minimo;
    minimo=INT_MAX;
    while(t--){
        int a; cin>>a;
        minimo=min(minimo,abs(a));

    }
    cout<<minimo;


    return 0;
}
