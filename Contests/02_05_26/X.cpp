#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;
const string a = "(2*";
const string b= ")^2";

void solve() {
    string c = "2";
    int nu;
    int sum=0;
    cin >>nu;
    sum=nu;
    if(nu== 1 ){
        cout << "2"<<'\n';
    }else if(nu%2==0){
    while (sum > 1){

    if(sum %2==1){
        c = a+c;
    sum--;

    }
    else{
        c="(" +c;
      c=c+b;
      sum/=2;
    }

    }
    cout << c<< '\n';

    }



    else{
    while (sum > 1){

    if(sum %2==1){
        c = a+"("+c;
    sum--;

    }
    else{
        c="(" +c;
      c=c+b;
      sum/=2;
    }

    }
    cout << c<< '\n';

    }


}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}

