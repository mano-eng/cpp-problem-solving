#include <iostream>
using namespace std;

int main()
{
    int X[100][100];
    int Y[100][100];
    int ySize[100];

    int m, n;
    cin >> m >> n;

    // 1- Read X
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> X[r][c];
        }
    }

    // 2- Find first row with two -1
    int posr = 0, posc1 = 0, posc2 = 0;

    for (int r = 0; r < m; r++)
    {
        int ct = 0;

        for (int c = 0; c < n; c++)
        {
            if (X[r][c] == -1)
            {
                ct++;

                if (ct == 1)
                {
                    posc1 = c;
                }

                if (ct == 2)
                {
                    posc2 = c;
                    posr = r;
                    break;
                }
            }
        }

        if (ct == 2)
        {
            break;
        }
    }

    // 3- Build Y
    int yr = 0;

    for (int r = posr; r < m; r++)
    {
        int yc = 0;
        int check = 0;

        for (int c = posc1; c <= posc2; c++)
        {
            Y[yr][yc] = X[r][c];
            yc++;
        }

        // Search for another -1
        if (r > posr)
        {
            for (int c = posc2 + 1; c < n; c++)
            {
                Y[yr][yc] = X[r][c];
                yc++;

                if (X[r][c] == -1)
                {
                    check = 1;
                    break;
                }
            }
        }

        ySize[yr] = yc;
        yr++;

        if (check == 1)
        {
            break;
        }
    }

    // 4- Display Y from bottom to top
    for (int r = yr - 1; r >= 0; r--)
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

    return 0;
}
