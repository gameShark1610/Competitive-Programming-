#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  std::cin >> n;
  vector<int> nums(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> nums[i];
  }
  sort(nums.begin(), nums.end());
  // for (int xd : nums) {
  //   cout << xd << " ";
  // }
  for (int i = 0; i < n; i++) {
    if (nums[i] != i + 1) {
      cout << i + 1;
      return 0;
    }
  }
  return 0;
}
