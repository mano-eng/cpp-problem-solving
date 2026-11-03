#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int X[100][100];
    int Y[100][100];
    int ysize[100];

    // 1- Read Matrix X
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> X[r][c];
        }
    }

    int yrow = 0;

    // 2- Find Columns and Copy in Y
    for (int c = 0; c < n; c++)
    {
        int count = 0;
        int posr1, posr2;

        for (int r = 0; r < m; r++)
        {
            if (X[r][c] == -1)
            {
                count++;

                if (count == 1)
                {
                    posr1 = r;
                }
                else if (count == 2)
                {
                    posr2 = r;
                }
            }
        }

        if (count == 2)
        {
            int k = 0;

            for (int r = posr1 + 1; r < posr2; r++)
            {
                Y[yrow][k] = X[r][c];
                k++;
            }

            ysize[yrow] = k;
            yrow++;
        }
    }

    // 3- Find Rows and Copy in Y
    for (int r = 0; r < m; r++)
    {
        int count = 0;
        int posc1, posc2;

        for (int c = 0; c < n; c++)
        {
            if (X[r][c] == -1)
            {
                count++;

                if (count == 1)
                {
                    posc1 = c;
                }
                else if (count == 2)
                {
                    posc2 = c;
                }
            }
        }

        if (count == 2)
        {
            int k = 0;

            for (int c = posc1 + 1; c < posc2; c++)
            {
                Y[yrow][k] = X[r][c];
                k++;
            }

            ysize[yrow] = k;
            yrow++;
        }
    }

    // 4- Display Y from right to left, stop when reach zero
    for (int r = 0; r < yrow; r++)
    {
        for (int c = ysize[r] - 1; c >= 0; c--)
        {
            cout << Y[r][c];

            if (Y[r][c] == 0)
            {
                break;
            }

            if (c > 0)
            {
                cout << ", ";
            }
        }

        cout << endl;
    }

    return 0;
}
