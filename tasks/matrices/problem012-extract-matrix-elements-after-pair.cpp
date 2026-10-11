#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int X[100][100];

    // 1- Read X
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> X[r][c];
        }
    }

    // 2- Get the last two cells
    int bCell = X[m - 1][n - 2];
    int lCell = X[m - 1][n - 1];

    int Y[100][100];
    int ySize[100];

    int startCol = n;
    int ct = 0;

    // 3- Create Y
    for (int r = 0; r < m; r++)
    {
        ySize[r] = 0;
        ct = 0;

        for (int c = 0; c < n - 1; c++)
        {
            if (ct == 0 &&
                X[r][c] == bCell &&
                X[r][c + 1] == lCell)
            {
                startCol = c + 2;
                ct = 1;
            }
        }

        for (int c = startCol; c < n; c++)
        {
            Y[r][ySize[r]] = X[r][c];
            ySize[r]++;
        }
    }

    // 4- Display Y from right to left
    for (int r = 0; r < m; r++)
    {
        for (int c = ySize[r] - 1; c >= 0; c--)
        {
            cout << Y[r][c];

            if (c > 0)
            {
                cout << " , ";
            }
        }

        if (ySize[r] > 0)
        {
            cout << endl;
        }
    }

    return 0;
}
