//
// Created by gameshark on 4/23/26.
//
#include <bits/stdc++.h>
using namespace std;

string agregaCdot(int modo, int num)
{
    string mandar;
    mandar="10^{"+to_string(num)+"}";
    if (modo==0) return mandar;
    else return "\\cdot"+mandar;
}


void sol()
{
    string lineL;
    getline(cin, lineL);

    lineL.




}

int main()
{
    int t=1;
    cin>>t;
    while (t--) sol();

}