#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

void solve() {
    cout << "Hello, Competitive Programming!" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int t;
    cin >> t;
    map<char,char> save1,save2;
    while (t--) {
        char a,b;
        cin>>a>>b;
        if(save2.find(a)!= save2.end()){
            save1[save2[a]]=b;
            save2.insert({save2[a],b});
        }

        save1.insert({a,b});
        save2.insert({b,a});

        //solve();
    }
    for(int i=0;i<n;i++){
        if(save1.find(s[i])!= save1.end()){
            s[i]=save1[s[i]];
        }
    }
    cout<<s;

    //solve();

    return 0;
}
