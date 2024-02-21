#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int tans[4], ans, pr = 0, nr = 0, t = 1, m, p;
    for (int i = 0; i < 4; i++)
    {
        cin >> tans[i];
    }
    while (1)
    {
        cout << "This is the " << t << "'s try";
        cin >> ans;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                m = pow(10, j);
                if (tans[i] == ans % m)
                {
                    if (i == j)
                    {
                        pr++;
                    }
                    else
                    {
                        nr++;
                    }
                }
            }
        }
        t++;
        cout << pr << "A" << nr << "B" << endl;
        if (pr == 4 and nr == 0)
        {
            break;
        }
    }
    return 0;
}