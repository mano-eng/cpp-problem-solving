#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;

    int X[100][100];

    // 1- Read X
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < m; c++)
        {
            cin >> X[r][c];
        }
    }

    // 2- Create Y
    int Y[100][100];
    int ySize[100];

    for (int r = 0; r < m; r++)
    {
        ySize[r] = 0;

        int posc1 = r;
        int posc2 = m - 1 - r;

        for (int c = 0; c < m; c++)
        {
            if (X[r][posc1] == X[r][posc2] &&
                (c == posc1 || c == posc2))
            {
            }
            else
            {
                Y[r][ySize[r]] = X[r][c];
                ySize[r]++;
            }
        }
    }

    // 3- Display Y
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < ySize[r]; c++)
        {
            cout << Y[r][c];

            if (c < ySize[r] - 1)
            {
                cout << " , ";
            }
        }

        cout << endl;
    }

    return 0;
}
