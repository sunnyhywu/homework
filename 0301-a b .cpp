#include <iostream>
using namespace std;
int main()
{
    int a, b, num, count = 0;
    float prob1, prob2, probl;
    cin >> a >> b;
    int x1, x2, x3, x4, y1, y2, y3, y4;
    int heig, leng, area;
    double h1, l1;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    num = b - a + 1;
    while (a < b)
    {
        if (a % 2 != 0)
        {
            count++;
        }
        a++;
    }
    prob1 = count / (float)num;
    prob2 = (float)num / 10;
    probl = prob1 * prob2;
    cout << "Q1-(a):" << prob1 << endl;
    cout << "Q1-(b):" << probl << endl;


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