#include <iostream>
using namespace std;
int main()
{
    int count1 = 0, count2 = 0, N, x,k;
    int i,j;
    cin >> N;
    x = 14;
    j = 14;
    while (1)
    {
        if (j >= N)
        {
            count1++;
            cout << "Now Floor: " << j << ", count:" << count1 << endl;
            break;
        }
        if (j < N)
        {
            count1++;
            cout << "Now Floor: " << j << ", count:" << count1 << endl;
            j = j + (x - 1);
            x--;
        }
        k=x;
    }
    /*if(j==N&&j!=14)
    {
        cout<<"The final count is:"<<count1<<endl; 
    }*/
     cout << "------ The 2nd egg ------" << endl;
    if(j>14)
    {
        i = j - k+1 ;
    }
    else i=1;
    while(1)
    {
        
        if(i>=N&&j!=N)
        {
            count1++;
            cout<<"Now Floor: "<<i<<", count:"<<count1<<endl;
            break;
        }
        if(i==N)
        {
            break;
        }
        if(i<N)
        {
            count1++;
            cout<<"Now Floor: "<<i<<", count:"<<count1<<endl;
            i++;
        }
        
    }
    cout<<"The final count is:"<<count1<<endl; 
    
    return 0;
}