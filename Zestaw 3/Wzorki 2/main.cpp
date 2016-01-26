#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int t, tab[10][2], a = 0, b = 0, j = 0, w, k;
	cin >> t;	// Wczytaj liczbê testów
	cout << endl;

	for (int i = 0; i < t; i++)
	{
		cin >> w;
		cin >> k;
		tab[i][j] = w;	// Wczytaj liczbê wierszy
		tab[i][j+1] = k;	// Wczytaj liczbe kolumn
		cout << endl;
	}

	do {
		for (int n = 0; n < tab[a][b + 1]; n++)
		{
			cout << "*";
		}
		cout << endl;

		for (int k = 0; k < tab[a][b] - 2; k++)
		{
			cout << "*";
			for (int l = 0; l < tab[a][b + 1] - 2; l++)
			{
				cout << ".";
			}
			if (tab[a][b + 1] != 1)
			{
				cout << "*";
				cout << endl;
			}
			else
			{
				cout << endl;
			}
		}

		for (int m = 0; m < tab[a][b + 1]; m++)
		{
			cout << "*";
		}
		cout << endl;
		a++;
		cout << endl;
	} while (a != t);

	cout << endl;
	system("PAUSE");
	return 0;
}
