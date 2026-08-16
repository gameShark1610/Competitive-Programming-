#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  int n;
  string x = "a";
  vector<string> letras(27);
  letras[0] = "a";
  letras[1] = "b";
  letras[2] = "c";
  letras[3] = "d";
  letras[4] = "e";
  letras[5] = "f";
  letras[6] = "g";
  letras[7] = "h";
  letras[8] = "i";
  letras[9] = "j";
  letras[10] = "k";
  letras[11] = "l";
  letras[12] = "m";
  letras[13] = "n";
  letras[14] = "o";
  letras[15] = "p";
  letras[16] = "q";
  letras[17] = "r";
  letras[18] = "s";
  letras[19] = "t";
  letras[20] = "u";
  letras[21] = "v";
  letras[22] = "w";
  letras[23] = "x";
  letras[24] = "y";
  letras[25] = "z";
  for (int i = 1; i < 10; i++) {
    x = x + letras[i] + x;
  }
  cout << x;

  return 0;
}
