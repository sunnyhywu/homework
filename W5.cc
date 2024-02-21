#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int s[30],st;
    double sum = 0, sd = 0, max = 0, min = 100, avg = 0;
    cin>>st;
    for (int i = 0;i < st; i++)
    {
        cin >> s[i];
        sum = sum + s[i];
        if (s[i] > max)
        {
            max = s[i];
        }
        if (s[i] < min)
        {
            min = s[i];
        }
    }
    cout<<sum<<endl;
    avg = sum / st;
    for (int i = 0; i < st; i++)
    {
        sd = sd + pow(s[i] - avg, 2) ;
    }
    cout << "avg=" << avg << endl
         << "sd=" << sqrt(sd / 10) << endl
         << "max=" << max << endl 
         << "min=" << min << endl;

    //Q2
    int num ;
    double lb=min,ub=min,range=0,dis=0,ct=0;
    cin>>num;
    range=(100-min)+1;
    dis=range/num;
    cout<<range<<endl<<dis<<endl;
    lb=lb-dis;
    for(int i=0;i<num;i++)
    {
        ct=0;
        lb=lb+dis;
        ub=ub+dis;
        if(ub>100)
        {
            ub=100;
        }
        for(int j=0;j<st;j++)
        {
            if(s[j]<ub and s[j]>=lb)
            {
                ct++;
            }
            if(s[j]==ub and ub==100)
            {
                ct++;
            }
        }
        cout<<"bin["<<i<<"] "<<"("<<lb<<"~"<<ub<<")"<<": "<<ct<<endl ;
    }
    return 0;
}