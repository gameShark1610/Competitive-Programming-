#include <bits/stdc++.h>
using namespace std;

int sol() {
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    int ops = 0;
    while (x.length() <= 100) {
        if (x.find(s) != string::npos)
            return ops;

        x += x;
        ops++;
    }

    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cout << sol() << "\n";
    }
}
