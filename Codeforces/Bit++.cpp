#include<iostream>
#include<string>

using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    string query;
    while(n--){
        cin>>query;
        if(query[0]=='+' || query[1]=='+') sum++;
        else sum--;
    }
    cout<<sum;
return 0;
}
