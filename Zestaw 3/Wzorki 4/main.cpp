#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int t, tab[10][4], a = 0, b = 0;
	cin >> t;	// Wczytaj liczb� test�w
	cout << endl;

	for (int i = 0; i < t; i++)	// Zapis liczby do tablicy
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> tab[i][j];	// Wczytaj wysoko�� i szeroko��
		}
		cout << endl;
	}

	do {

		if (tab[a][b + 3] == 1)
		{
			for (int i = 0; i < tab[a][b + 1] * 3; i++)	// Ten kod robi linie z gwiazdek o danej d�ugosci ****
			{
				cout << "*";
			}
			cout << endl;	// Przej�cie do nowej linii
		}
		else
		{
			for (int i = 0; i < tab[a][b + 1] * 3; i++)	// Ten kod robi linie z gwiazdek o danej d�ugosci ****
			{
				cout << "*";
			}
			cout << "*";
			cout << endl;	// Przej�cie do nowej linii
		}
		for (int j = 0; j < tab[a][b]; j++)	// Ten kod robi gwiazdk� na pocz�tku lini *[..*..*..*]
		{
			for (int k = 0; k < tab[a][b + 2]; k++)
			{
				cout << "*";
				for (int l = 0; l < tab[a][b + 1]; l++)
				{
					for (int m = 0; m < tab[a][b + 3]; m++)	 // Ten kod robi linie kropek i gwiazdek [*]..*..*..*
					{
						cout << ".";
					}
					cout << "*";
				}
				cout << endl;	// Przej�cie do nowej linii
			}
			if (tab[a][b + 3] == 1)
			{
				for (int i = 0; i < tab[a][b + 1] * 3; i++)	// Ten kod robi linie z gwiazdek o danej d�ugosci ****
				{
					cout << "*";
				}
				cout << endl;	// Przej�cie do nowej linii
			}
			else
			{
				for (int i = 0; i < tab[a][b + 1] * 3; i++)	// Ten kod robi linie z gwiazdek o danej d�ugosci ****
				{
					cout << "*";
				}
				cout << "*";
				cout << endl;	// Przej�cie do nowej linii
			}
		}
		a++;
		cout << endl;

	} while (a != t);

	cout << endl;
	system("PAUSE");
	return 0;
}
