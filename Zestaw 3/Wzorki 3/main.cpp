#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int t, tab[10][2], a = 0, b = 0;
	cin >> t;	// Wczytaj liczb� test�w
	cout << endl;

	for (int i = 0; i < t; i++)	// Zapis liczby do tablicy
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> tab[i][j];	// Wczytaj wysoko�� i szeroko��
		}
		cout << endl;
	}

	do {

		for (int j = 0; j < tab[a][b + 1] * 3; j++)	// Ten kod robi linie z gwiazdek o danej d�ugosci ****
		{
			cout << "*";
		}
		cout << "*";
		cout << endl;	// Przej�cie do nowej linii

		for (int l = 0; l < tab[a][b]; l++)	// Ten kod robi gwiazdk� na pocz�tku lini *[..*..*..*]
		{
			for (int z = 0; z < 2; z++)
			{
				cout << "*";
				for (int m = 0; m < tab[a][b + 1]; m++)	 // Ten kod robi linie kropek i gwiazdek [*]..*..*..*
				{
					cout << ".";
					cout << ".";
					cout << "*";
				}
				cout << endl;	// Przej�cie do nowej linii
			}
				for (int n = 0; n < tab[a][b + 1] * 3; n++)	// Ten kod robi linie z gwiazdek o danej d�ugosci ****
				{
					cout << "*";
				}
				cout << "*";
				cout << endl;	// Przej�cie do nowej linii
		}
		a++;
		cout << endl;

	} while (a != t);

	cout << endl;
	system("PAUSE");
	return 0;
}
