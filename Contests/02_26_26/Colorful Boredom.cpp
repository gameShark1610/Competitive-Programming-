#include <bits/stdc++.h>

using namespace std;

vector<long long> memo(1e7+1,-1);

long long dp(long long n){
    long long sum=0;
    if(memo[n]!=-1){
        return memo[n];
    }
    sum+=2*dp(n-2);
    sum+=dp(n-3);
    memo[n]=sum%(1000000007);
    return memo[n];
}

void sol(){
    long long n; cin>>n;
    for(long long i=4;i<=n;i++){
        long long suma=0;
        suma+=2*memo[i-2];
        suma+=memo[i-3];
        memo[i]=suma%(1000000007);
    }
    cout<<memo[n];
    //cout<<dp(n);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    memo[0]=0;
    memo[1]=0;
    memo[2]=2;
    memo[3]=1;
    memo.push_back()
    sol();
}
