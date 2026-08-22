#include <bits/stdc++.h>

using namespace std;

void sol() {
  string s;
  cin >> s;
  long long nb, ns, nc, pb, ps, pc;
  cin >> nb >> ns >> nc >> pb >> ps >> pc;
  long long money;
  cin >> money;

  long long needB=0,needS=0,needC=0;

  for(auto xd: s){
    if(xd=='B') needB++;
    if(xd=='S') needS++;
    if(xd=='C') needC++;
  }


  long long hi=3e12+1;
  long long low=0;
  while (hi-low>1)
  {
    long long numH= (hi+low)/2;

    long long howBread= needB*numH-nb;
    howBread = howBread<0 ? 0: howBread*pb;

    long long howSau= needS*numH-ns;
    howSau = howSau<0 ? 0: howSau*ps;

    long long howChes= needC*numH-nc;
    howChes = howChes<0 ? 0: howChes*pc;
    
    long long totalMoney= howBread+howSau+howChes;
    if(totalMoney>money){
      hi=numH;
    }else low=numH;
  }
  cout<<low;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  sol();
}
