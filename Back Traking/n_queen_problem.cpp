#include <iostream>
using namespace std;

void printBoard(int board[][20], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool canPlace(int board[][20], int n, int i, int j)
{

    // checking the columns
    for (int k = 0; k < i; k++)
    {
        if (board[k][j] == 1)
            return false;
    }

    // checking left diagonal

    int l = i;
    int m = j;

    while (l >= 0 && m >= 0)
    {
        if (board[l][m] == 1)
            return false;
        l--, m--;
    }

    // checking right diagonal

    l = i;
    m = j;

    while (m < n && l >= 0)
    {
        if (board[l][m] == 1)
            return false;
        l--, m++;
    }
    return true;
}

bool solveNQueen(int board[][20], int n, int i)
{
    if (i == n)
    {
        printBoard(board, n);
        cout << endl;
        return true;
    }

    for (int j = 0; j < n; j++)
    {

        if (canPlace(board, n, i, j))
        {
            board[i][j] = 1;
            bool success = solveNQueen(board, n, i + 1);

            if (success)
                return true;

            board[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the dimensions of the chess board" << endl;
    cin >> n;

    int board[20][20] = {0};

    for (int i = 0; i < n; i++)
    {
        solveNQueen(board, n, i);
    }
    return 0;
}