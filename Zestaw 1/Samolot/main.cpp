#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
	int n1,n2,k1,k2,sum;
	cin >> n1;
	cin >> k1;
	cin >> n2;
	cin >> k2;

	if ((1<=n1)&&(k2<=1000))
	{
		sum=(n1*k1)+(n2*k2);
	}
	cout << sum <<endl;

	return 0;
}
