#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n>> k;
    // Q1
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 or i == n)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int j = 0; j < n - 2; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    cout << "===================================" << endl;
    // Q2
        for (int i = 0; i < 4*n+1; i++)
        {
            for(int j=0;j<4*n+1;j++)
            {
                if(i%4==0)
                {
                        cout<<"*";
                }
                else if(j%4==0)
                {
                     cout<<"*";
                }
                else 
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    
    cout << "===================================" << endl;

    // Q3
    for (int i = 0; i < 2 * n ; i++)
    {
        if (i <= n)
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "*";
            }
        }
        if (i > n)
        {
            for (int j = 0; j < i - n; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 4*n-1-2*i; j++)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
}