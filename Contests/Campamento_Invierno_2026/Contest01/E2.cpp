#include <bits/stdc++.h>

using namespace std;

int main() {
  string s =
      "abacabadabacabaeabacabadabacabafabacabadabacabaeabacabadabacabagabacabad"
      "abacabaeabacabadabacabafabacabadabacabaeabacabadabacabahabacabadabacabae"
      "abacabadabacabafabacabadabacabaeabacabadabacabagabacabadabacabaeabacabad"
      "abacabafabacabadabacabaeabacabadabacabaiabacabadabacabaeabacabadabacabaf"
      "abacabadabacabaeabacabadabacabagabacabadabacabaeabacabadabacabafabacabad"
      "abacabaeabacabadabacabahabacabadabacabaeabacabadabacabafabacabadabacabae"
      "abacabadabacabagabacabadabacabaeabacabadabacabafabacabadabacabaeabacabad"
      "abacabajabacabadabacabaeabacabadabacabafabacabadabacabaeabacabadabacabag"
      "abacabadabacabaeabacabadabacabafabacabadabacabaeabacabadabacabahabacabad"
      "abacabaeabacabadabacabafabacabadabacabaeabacabadabacabagabacabadabacabae"
      "abacabadabacabafabacabadabacabaeabacabadabacabaiabacabadabacabaeabacabad"
      "abacabafabacabadabacabaeabacabadabacabagabacabadabacabaeabacabadabacabaf"
      "abacabadabacabaeabacabadabacabahabacabadabacabaeabacabadabacabafabacabad"
      "abacabaeabacabadabacabagabacabadabacabaeabacabadabacabafabacabadabacabae"
      "abacabadabacaba";
  int n;
  cin >> n;
  cout << s[n - 1];
  cout << " " << s.size();
  return 0;
}
