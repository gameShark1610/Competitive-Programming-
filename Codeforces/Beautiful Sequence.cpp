#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool found = false;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num <= i + 1) {
                found = true;
            }
        }
        cout << (found ? "YES\n" : "NO\n");
    }
    return 0;
}
