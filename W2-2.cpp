#include <iostream>
using namespace std;
int main()
{
    int N, n1 = 0, n2 = 1,ans;
    cin>>N;
    for (int i = 2; i < N; i++)
    {
        ans=n1+n2;
        n1=n2;
        n2=ans;
    }
    cout<<ans;
    return 0;
}