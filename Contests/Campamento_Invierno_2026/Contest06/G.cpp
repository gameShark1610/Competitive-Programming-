#include <bits/stdc++.h>

using namespace std;

void sol()
{
    int a, b;
    cin >> a >> b;
    if (a == 1 && b>1 )
    {
        cout << 0;
        return;
    }
    long long ans = a;
    for (int i = 0; i < b - 1; i++)
    {
        ans = ans * (a - 1);
        ans = ans % 998244353;
    }
    cout << ans;
}
int main()
{
    sol();
}