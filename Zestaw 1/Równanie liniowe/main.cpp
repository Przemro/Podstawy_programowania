#include <iostream>
#include <cmath>

using namespace std;

double zaokraglij(double n)
{
  int y = n * 10000; // przesuwamy przecinek o 4 miejsca i pozbywamy sie reszty za przecinkiem - y jest calkowite
  if (y % 100 >= 5)
  {
      y = y + 100; // jezeli cyfra jednosci >= 5
  }
  return (y / 100) * 0.01; // usuwamy ostatnia cyfre i zamieniamy na liczbe zmiennoprzecinkowa
}

int main()
{
    float a, b, c, x, y;

    cin >> a;   // Wczytaj a
    cin >> b;   // Wczytaj b
    cin >> c;   // Wczytaj c

    if (a != 0)
    {
        x = (c-b)/a;
        cout << x << zaokraglij(x) << endl;
    }
    if ((a == 0)&&(b != 0))
    {
        cout << "BR" << endl;
    }
    if ((a == 0)&&(b == 0))
    {
        cout << "NWR" << endl;
    }
    return 0;
}
