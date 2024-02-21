#include<iostream>
using namespace std ;

int findIndex(int n,int arr[4])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i]+arr[j]==n and i<j)
                cout<<"["<<i<<","<<j<<"]"<<'\n';
        }
    }
    cout<<"No pairs number found."<<'\n';
}
int main()
{
    int array[4]={2,7,11,15};
    int n;
    //cout<<"Enter the target num ";
    while(cin>>n)
    {
        findIndex(n,array);
    }
}