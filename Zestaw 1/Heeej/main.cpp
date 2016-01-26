#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
	int x;
	char e='e';

	cin >> x;
	if ((x>0)&&(x<50))
	{
		cout << "H";
		for (int i = 0; i < x; i++)
		{
			cout << e;
		}
		cout << "j" << endl;
	}
	return 0;
}
