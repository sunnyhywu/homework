#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int ct = 2 * i + 1;
        for (int j = 1; j < N - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int g = 0; g < 2 * (i - 1); g++)
        {
            cout << " ";
        }
        if (i > 1)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}