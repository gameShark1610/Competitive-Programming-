#include <bits/stdc++.h>

using namespace std;

void sol()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    vector<int> pos(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        pos[p[i]] = i;
    }

    int l = 1, r = 1;
    for (int i = 1; i <= n; i++)
    {
        int expected_val = n - i + 1;
        if (p[i] != expected_val)
        {
            l = i;
            r = pos[expected_val];
            break;
        }
    }
    reverse(p.begin() + l, p.begin() + r + 1);
    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
