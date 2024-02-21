#include <iostream>
#include <algorithm>
using namespace std;

void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int findMin(int num, int scores[])
{
    int min = scores[0];
    for (int i = num; i < 10; i++)
    {
        if (scores[i] < min)
            min = scores[i];
    }
    return min;
}
int main()
{
    int scores[10] = {94, 85, 73, 62, 97, 88, 54, 61, 99, 70};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (scores[i] < findMin(j, scores))
                swap(scores[i], min);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << scores[i] << " ";
    }
    cout << "\n";
    return 0;
}