#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    int heig, leng, area;
    double h1, l1;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (((x2 - x1) && (y1 - y3)) == ((x4 - x3) && (y2 - y4)))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    area = (x2 - x1) * (y2 - y4);
    cout << area;
    return 0;
}