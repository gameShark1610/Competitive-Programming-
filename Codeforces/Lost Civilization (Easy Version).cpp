#include <bits/stdc++.h>

using namespace std;

void sol() {
    int n; cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    stack<int> memo;
    for (int i = n - 1; i >= 0; --i) {
        while (!memo.empty() && memo.top() == nums[i] + 1) {
            memo.pop();
        }
        memo.push(nums[i]);
    }
    cout << memo.size() << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) sol();

    return 0;
}
