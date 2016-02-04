#include <iostream>
#include <math.h>

using namespace std;

float zaokraglij(float n)
{
    float liczba = n * 100;
    liczba = round(liczba);
    return liczba * 0.01;
}

int main()
{
    float a, b, c, x;

    cin >> a;   // Wczytaj a
    cin >> b;   // Wczytaj b
    cin >> c;   // Wczytaj c

    if (a != 0)
    {
        x = (c-b)/a;
        cout << zaokraglij(x) << endl;
    }
    else
    {
        if ((a == 0)&&(b != c))
        {
            cout << "BR" << endl;
        }
        else
        {
            cout << "NWR" << endl;
        }
    }
    return 0;
}
