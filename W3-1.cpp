#include<iostream>

using namespace std;

int main()
{
    int h, x , y, i=0 ;
    cin>>h>>x>>y;
    while(h!=0)
    {
        h=h-(x-y);
        i++;
        if(i>365*6)
        {
            break;
        }
        
    }
    if(h=0)
    {
        cout<<i;
    }
    else if (i>365*6)
    {
        cout<<"無法抵達"ㄤ
    }

}
