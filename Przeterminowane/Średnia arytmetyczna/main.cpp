#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t)
    {
        cin >> n;
        int tab[n];
        float a = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tab[i];
            a = a + tab[i];
        }

        for (int j = 0; j < n; j++)
        {
            if ((ceil(a/n) == tab[j])||(floor(a/n) == tab[j]))
            {
                cout << tab[j] << endl;
                break;
            }
        }
        t--;
    }
    return 0;
}
