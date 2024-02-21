#include <iostream>
using namespace std;
int giveCharge(int m, int one, int five, int ten)
{
    if (m == 0)
        cout << "one dollar: " << 0 << '\n'
             << "five dollar: " << 0 << '\n'
             << "ten dollar: " << 0 << '\n';
    if (m % ten > 0)
    {
    }
}
int main()
{
    int m;
    cin >> m;
    cout << giveCharge(m, 1, 5, 10);
    return 0;
}