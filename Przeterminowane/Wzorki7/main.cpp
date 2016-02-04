#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   int t,w,k,s;
   cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> w;
        cin >> k;
        cin >> s;

        for(int j = 0; j < w * s * 2; j++)
        {
            for(int l = 0; l < k * s * 2; l++)
            {
                if((i + j) % (s * 2) == (s - 1))
                {
                    cout << "/";
                }
                if(labs(i-j)%(s*2)==s)
                {
                    cout << "\\";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
   }
    return 0;
}
