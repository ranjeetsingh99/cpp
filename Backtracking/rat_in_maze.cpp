/*
    6
    1 0 1 1 1 0
    1 1 1 0 1 0
    0 0 0 1 1 0
    1 1 1 1 0 0
    1 0 0 0 0 1
    1 1 1 1 1 1

*/
#include <iostream>
using namespace std;

bool issafe(int rat_x , int rat_y , int n , int** maze)
{
    if (rat_x >= 0 && rat_x < n && rat_y >= 0 && rat_y < n && maze[rat_x][rat_y] == 1)
        return true;

    return false;
}

void printsol(int n , int** sol)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << sol[i][j] << " ";

        cout << endl;
    }
}

bool solvemaze(int rat_x , int rat_y , int n , int** maze , int** sol)
{
    if (rat_x == n - 1 && rat_y == n - 1)
    {
        sol[rat_x][rat_y] = 1;
        printsol(n , sol);
        return true;
    }

    if (issafe(rat_x , rat_y , n , maze))
    {
        if (sol[rat_x][rat_y]) // if element is already visited
            return false;

        sol[rat_x][rat_y] = 1;

        if (solvemaze(rat_x + 1 , rat_y , n , maze , sol))
            return true;

        if (solvemaze(rat_x , rat_y + 1 , n , maze , sol))
            return true;

        if (solvemaze(rat_x - 1 , rat_y , n , maze , sol))
            return true;

        if (solvemaze(rat_x , rat_y - 1 , n , maze , sol))
            return true;

        sol[rat_x][rat_y] = 0;
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int** maze = new int* [n];
    for (int i = 0; i < n; i++)
        maze[i] = new int[n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> maze[i][j];

    int** sol = new int* [n];
    for (int i = 0; i < n; i++)
    {
        sol[i] = new int[n];
        for (int j = 0; j < n; j++)
            sol[i][j] = 0;
    }
    int rat_x = 0 , rat_y = 0;

    if (!solvemaze(rat_x , rat_y , n , maze , sol))
        cout << "Solution does not exist";


    return 0;
}