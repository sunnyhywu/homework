#include <iostream>
using namespace std;
int main()
{
    int a,b ,r,na,nb;
    while (cin >> a >> b)
    {
        na=a;
        nb=b;
        while (b != 0)//最大公因數//
        {
            r = a % b;
            a = b;
            b = r;
        }
        cout <<"GCD is "<< a << endl;
        cout<<"LCM is "<<(na*nb)/a;//
    }

    return 0;
}