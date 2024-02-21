#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        if (n % 16 <= 9)
        {
            cout << n % 16;
        }
        else 
        {
            cout<<char((n%16-10)+'A');
        }
        cout<<" ";
        n=n/16;
    }

    return 0;
}