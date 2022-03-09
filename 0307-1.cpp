#include<iostream>
using namespace std;
int main()
{
    int num,a=0;
    while(cin>>num)
    {
        for(int i=2;i<num;i++)
        {

            if(num%i==0)
            {
                cout<<num<<" is not a prime number"<<endl;
                break;
            }
            else
            {
                a++;
            }   
        }
        if(a==(num-2)||(num==2))
        {
            cout<<num<<" is a prime number";
        }
    }

    return 0;
}