#include <iostream>
using namespace std;
int main()
{
    int P, Y, t;
    float I, M , Pt ;
    while(cin >> P >> I >> Y >> t)
    {
        Pt = P;
        M = 1 + I / 12;
        for (int i = 0; i < t; i++)
        {
            Pt = (Pt * M) - Y;
            cout << Pt << endl;
        }
    }
    return 0;
}