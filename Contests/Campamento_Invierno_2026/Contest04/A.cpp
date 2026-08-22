#include <bits/stdc++.h>

using namespace std;

vector<int> check(100005,0);

vector<int> obtener_divisores(int n) {
    vector<int> divisores;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisores.push_back(i); // Agregamos el divisor pequeño
            if (i != n / i) {
                divisores.push_back(n / i); // Agregamos su pareja complementaria
            }
        }
    }
    sort(divisores.begin(), divisores.end()); // Opcional: ordenar de menor a mayor
    return divisores;
}


void sol(){
int n,m; cin>>n>>m;
    vector<int> disp(n);
    vector<int> disp2(m);
    for(auto &i: dis) cin>>i;

    for(auto num: dis) {
        check[num]=1;
    }

    int cont=0;

    while(m--){
        vector<int> res = obtener_divisores(n);
    
    for(auto xddd: res){
        if(check[xddd]=1) cont++;
    }

    

    cout<<cont<< "\n";
    }
    for(auto num: dis) {
        check[num]=0;
    }
    
}
int main() {
    int t; cin>>t;
    while(t--) sol();
        return 0;

}