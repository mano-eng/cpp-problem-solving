#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    int X[100][100];

    // Read X
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> X[r][c];
        }
    }

    // Find -1
    int posr = 0;
    int posc = 0;

    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if (X[r][c] == -1)
            {
                posr = r;
                posc = c;
            }
        }
    }

    // Get Val
    int Val = X[posr][n - 1];

    int YLeft[100][100];
    int YRight[100][100];

    int ysizelfet[100];
    int ysizeright[100];

    // Build YLeft
    int yr = 0;

    for (int r = 0; r < m; r++)
    {
        int yc = 0;

        for (int c = 0; c < posc; c++)
        {
            if (X[r][c] == Val)
            {
                YLeft[yr][yc] = r;
                yc++;

                YLeft[yr][yc] = c;
                yc++;
            }
        }

        ysizelfet[yr] = yc;
        yr++;
    }

    // Build YRight
    yr = 0;

    for (int r = 0; r < m; r++)
    {
        int yc = 0;

        for (int c = posc + 1; c < n; c++)
        {
            if (X[r][c] == Val)
            {
                YRight[yr][yc] = r;
                yc++;

                YRight[yr][yc] = c;
                yc++;
            }
        }

        ysizeright[yr] = yc;
        yr++;
    }

    // Display YLeft column-wise from Right to Left
    int maxleft = 0;

    for (int r = 0; r < m; r++)
    {
        if (ysizelfet[r] > maxleft)
        {
            maxleft = ysizelfet[r];
        }
    }

    for (int c = maxleft - 1; c >= 0; c--)
    {
        for (int r = 0; r < m; r++)
        {
            if (c < ysizelfet[r])
            {
                cout << YLeft[r][c] << ", ";
            }
        }

        cout << endl;
    }

    // Display YRight column-wise from Right to Left
    int maxright = 0;

    for (int r = 0; r < m; r++)
    {
        if (ysizeright[r] > maxright)
        {
            maxright = ysizeright[r];
        }
    }

    for (int c = maxright - 1; c >= 0; c--)
    {
        for (int r = 0; r < m; r++)
        {
            if (c < ysizeright[r])
            {
                cout << YRight[r][c] << ", ";
            }
        }

        cout << endl;
    }

    return 0;
}
