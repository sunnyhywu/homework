#include <iostream>

using namespace std;

void printSquare(char square[9])
{
    for (int i = 0; i < 9; i++)
    {
        cout << square[i] << " ";
        if ((i + 1) % 3 == 0)
            cout << '\n';
    }
}
bool hitTarget()
{
    int arr[2] = {0, 1};
    int i = rand() % 2;
    if (i == 0)
        return false;
    else
        return true;
}
int baseBall(int target, char square[9])
{
    if (square[target - 1] == 'x')
        cout << "This grid has been target before " << '\n';
    else if (hitTarget())
    {
        square[target - 1] = 'x';
        cout << "Hit the target! " << '\n';
    }
    else
        cout << "Fail to hit the target " << '\n';

    return square[9];
}
int gameResult(char square[9])
{
    int cnt = 0;
    for (int i = 0; i < 9; i++)
    {
        if (square[i] == 'x')
            cnt++;
    }
    return cnt;
}

int main()
{
    char square[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    printSquare(square);
    int n, i = 1;
    while (i < 9)
    {
        cout << "This is the " << i << "'s try" << '\n';
        printSquare(square);
        cout << "Please enter the target grid : ";
        cin >> n;
        baseBall(n, square);
        i++;
        cout<<'\n';
    }

    cout << "The game result" << '\n';
    printSquare(square);
    cout << "Total grids hit " << gameResult(square) << '\n';
    return 0;
}