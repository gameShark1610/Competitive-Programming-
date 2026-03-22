#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        map<int,int> mapita;

        cin>>n;
        int number;
        for(int i=0;i<n;i++){
            cin>>number;
            mapita[number]++;
        }
        if(mapita.size()>=3) cout<<"No\n";
        else if(abs(mapita.begin()->second-mapita.rbegin()->second)>1) cout<<"No\n";
        else cout<<"Yes\n";
    }

    return 0;
}
