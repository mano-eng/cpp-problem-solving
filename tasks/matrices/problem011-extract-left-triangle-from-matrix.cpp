#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int X[100][100];

    // 1- Read X
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> X[r][c];
        }
    }

    // 2- Find -1
    int posr = 0, posc = 0;

    for (int r = 0; r < n; r++)
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

    // 3- Copy Left Triangle into Y
    int Y[100][100];
    int ySize[100];

    for (int r = 0; r <= posr; r++)
    {
        ySize[r] = 0;

        int startCol = posc - posr + r;

        for (int c = startCol; c <= posc; c++)
        {
            Y[r][ySize[r]] = X[r][c];
            ySize[r]++;
        }
    }

    // 4- Display Y
    for (int r = 0; r <= posr; r++)
    {
        for (int c = 0; c < ySize[r]; c++)
        {
            cout << Y[r][c] << " ";
        }

        cout << endl;
    }

    return 0;
}
