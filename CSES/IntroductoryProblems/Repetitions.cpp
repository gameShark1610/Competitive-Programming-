#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  string word;
  cin >> word;
  int cont = 1, maximus = 1;
  for (int i = 1; i < word.length(); i++) {
    if (word[i] == word[i - 1]) {
      cont++;
    } else
      cont = 1;
    maximus = max(cont, maximus);
  }
  cout << maximus;
  return 0;
}
