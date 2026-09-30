#include <iostream>
using namespace std;

void Read(int X[][100], int m, int n)
{
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> X[r][c];
        }
    }
}

void Find(int X[][100], int m, int n,
          int &posr, int &posc, int num1, int num2)
{
    for (int c = 0; c < n; c++)
    {
        for (int r = 0; r < m - 1; r++)
        {
            if (X[r][c] == num1 && X[r + 1][c] == num2)
            {
                posr = r;
                posc = c;
            }
        }
    }
}

void Copy(int X[][100], int m, int n,
          int posr1, int posc1,
          int Z[][4],
          int Y[][100], int posr2, int posc2,
          int col)
{
    int row = 0;

    for (int r = posr1; r < m; r++)
    {
        Z[row][col] = X[r][posc1];
        row++;
    }

    for (int r = 0; r < posr2 + 2; r++)
    {
        Z[row][col] = Y[r][posc2];
        row++;
    }
}

int main()
{
    int Z[100][4];

    int posr1, posc1;
    int posr2, posc2;

    int Y[100][100];
    int X[100][100];

    int m, n;

    cin >> m >> n;

    Read(X, m, n);
    Read(Y, m, n);

    // 10, 20 → Column 0
    Find(X, m, n, posr1, posc1, 10, 20);
    Find(Y, m, n, posr2, posc2, 10, 20);

    Copy(X, m, n,
         posr1, posc1,
         Z,
         Y, posr2, posc2,
         0);

    // 30, 40 → Column 1
    Find(X, m, n, posr1, posc1, 30, 40);
    Find(Y, m, n, posr2, posc2, 30, 40);

    Copy(X, m, n,
         posr1, posc1,
         Z,
         Y, posr2, posc2,
         1);

    // 50, 60 → Column 2
    Find(X, m, n, posr1, posc1, 50, 60);
    Find(Y, m, n, posr2, posc2, 50, 60);

    Copy(X, m, n,
         posr1, posc1,
         Z,
         Y, posr2, posc2,
         2);

    // 70, 80 → Column 3
    Find(X, m, n, posr1, posc1, 70, 80);
    Find(Y, m, n, posr2, posc2, 70, 80);

    Copy(X, m, n,
         posr1, posc1,
         Z,
         Y, posr2, posc2,
         3);

    return 0;
}
