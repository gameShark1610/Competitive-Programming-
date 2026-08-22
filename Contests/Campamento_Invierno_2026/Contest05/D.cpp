#include <bits/stdc++.h>

using namespace std;

vector<int> check(100005, 0);

vector<int> obtener_divisores(int n)
{
  vector<int> divisores;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      divisores.push_back(i); // Agregamos el divisor pequeño
      if (i != n / i)
      {
        divisores.push_back(n / i); // Agregamos su pareja complementaria
      }
    }
  }
  sort(divisores.begin(),
       divisores.end()); // Opcional: ordenar de menor a mayor
  return divisores;
}

void sol()
{
  int n, m;
  cin >> n >> m;
  vector<int> disp(n);
  for (auto &i : disp)
    cin >> i;

  for (auto num : disp)
  {
    check[num] = 1;
  }

  while (m--)
  {
    int number;
    int cont = 0;
    cin >> number;
    vector<int> res = obtener_divisores(number);

    for (auto xddd : res)
    {
      if (check[xddd] == 0)
        cont++;
    }

    cout << cont << "\n";
  }
  for (auto num : disp)
  {
    check[num] = 0;
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
    sol();
  return 0;
}
