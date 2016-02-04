#include <iostream>
#include<cstdio>
#include<string.h>

using namespace std;

int main() {

    int t,x;
    char tab[2001];

    cin >> t;

    while(t--)
    {
        cin >> tab;
        x = strlen(tab)/2;
        for(int i = 0; i < x; i++)
        {
            cout << tab[i];
        }
        cout << endl;
    }
    return 0;
}
