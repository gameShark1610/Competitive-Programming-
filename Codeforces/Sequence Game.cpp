#include <bits/stdc++.h>

using namespace std;

void sol(){
    int numeros;
    cin>>numeros;

    int num;
    vector<int> vectorsito1;
    vector<int> vectorsito2;
    for(int i{};i<numeros;i++){
        cin>>num;
        vectorsito1.push_back(num);
    }
        //for(int in:vectorsito1 ) cout<<in<<'\n';

    vectorsito2.push_back(vectorsito1[0]);
    for(int i=1;i<numeros;i++){
        if(vectorsito1[i-1]<=vectorsito1[i])
            vectorsito2.push_back(vectorsito1[i]);
        else{ vectorsito2.push_back(vectorsito1[i]);
                vectorsito2.push_back(vectorsito1[i]);
        }
    }
    cout<<vectorsito2.size()<<'\n';
    for(int in:vectorsito2 ) cout<<in<<" ";
    cout<<'\n';

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        sol();
    }

    return 0;
}
