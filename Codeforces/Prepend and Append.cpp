#include <bits/stdc++.h>

using namespace std;

void sol(){
	int x;cin>>x;
	string n; cin>>n;
	if(x==0) {
		cout<<0<<'\n';
	}
	int d1=0,d2=n.length()-1;
	int cont=n.length();
	while(d1<d2){
		if(n[d1]==n[d2]){
			cout<<cont<<'\n';
			return;
		}else{
			cont-=2;
			d1++; d2--;
		}
	}
	cout<<cont<<'\n';

	

	return;
}


int main(){
	int t=1;
	cin>>t;
	while(t--){
		sol();
	}

	return 0;
}
