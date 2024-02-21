#include <iostream>
using namespace std;

void removeNeighbors(int grids[4][5], int i, int j)
{
    // recursive function
}

int countIslands(int grids[4][5])
{
    int count = 0;
    // use nested loops to find islands
    // i.e.
    // Find a cell with value 1.
    // Once found, remove all adjacent cells with value 1 (set to 0) recursively.
    return count;
}

int main()
{
    int grids1[4][5] = 
    {
        {1, 1, 1, 1, 0},
        {1, 1, 0, 1, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int grids2[4][5] = 
    {
        {1, 1, 0, 0, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 1}
    };

    cout << "Islands count in grid1: " << countIslands(grids1) << endl;
    cout << "Islands count in grid2: " << countIslands(grids2) << endl;

    return 0;
}