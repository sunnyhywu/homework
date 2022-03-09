#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int count,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10;
    /*b1代表第一瓶取一顆
      b2則表第二瓶取兩顆
      以此類推 */
    float weight;
    while(cin>>weight)
    {
        count=ceil(10*(weight-55));
        cout<<count<<endl;
    }
    

    return 0;
}