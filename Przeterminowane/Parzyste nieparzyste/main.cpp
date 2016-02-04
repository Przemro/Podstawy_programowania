#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

#define T_SIZE 1000

void zapis_tabeli(int tab[], int n) // Funkcja zapisujaca dane do tabeli
{
    for (int i = 1; i < n+1; i++)
    {
        cin >> tab[i];
    }
}

void parzyste(int tab[], int n) // Funkcja wyswietlajaca liczby na miejscach parzystych i nieparzystych
{
for (int i = 2; i < n + 1; i = i + 2)
        {
            cout << tab[i];
        }
for (int i = 1; i < n + 1; i = i + 2)
        {
            cout << tab[i];
        }
        cout << endl;
}

int main()
{
  int t,n;
  int tab[T_SIZE];

  cin >> t; // Wczytaj liczbe testow
  while(t)
    {
        cin >> n;
        zapis_tabeli(tab, n);
        parzyste(tab, n);
        t--;
    }
  return 0;
}
