#include <iostream>
using namespace std;

int main()
{
    int X[100][100], Y[300][100];
    int ySize[300];
    int m, n;

    // 1- Read X
    cin >> m >> n;

    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> X[r][c];
        }
    }

    // 2- Build Y
    int yr = 0;

    for (int r = 0; r < m; r++)
    {
        int ct = 0;

        for (int c = 0; c < n; c++)
        {
            if (X[r][c] == -1)
            {
                ct = 1;
            }
        }

        if (ct == 1)
        {
            int yc = 0;

            for (int c = 0; c < n; c++)
            {
                if (X[r][c] != -1)
                {
                    Y[yr][yc] = X[r][c];
                    yc++;
                }
                else
                {
                    ySize[yr] = yc;
                    yr++;
                    yc = 0;
                }
            }

            ySize[yr] = yc;
            yr++;
        }
    }

    // 3- Display rows that start and end with odd cells
    for (int r = 0; r < yr; r++)
    {
        if (ySize[r] > 0 && Y[r][0] % 2 != 0 && Y[r][ySize[r] - 1] % 2 != 0)
        {
            for (int c = 0; c < ySize[r]; c++)
            {
                cout << Y[r][c];

                if (c < ySize[r] - 1)
                {
                    cout << ", ";
                }
            }

            cout << endl;
        }
    }

    return 0;
}
