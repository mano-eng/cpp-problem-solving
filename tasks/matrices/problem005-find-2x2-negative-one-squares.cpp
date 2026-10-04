#include <iostream>
using namespace std;

int main()
{
    int x[100][100];
    int y[200][100];
    int ycnt[200];

    int n;
    cin >> n;

    // Read X
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> x[r][c];
        }
    }

    int yr = 0;
    int posr;
    int posc;

    // Find 2x2 squares of (-1)
    for (int r = 0; r < n - 1; r++)
    {
        for (int c = 0; c < n - 1; c++)
        {
            if (x[r][c] == -1 &&
                x[r][c + 1] == -1 &&
                x[r + 1][c] == -1 &&
                x[r + 1][c + 1] == -1)
            {
                posr = r;
                posc = c;

                // Copy the left part of the two rows
                for (int r = posr; r <= posr + 1; r++)
                {
                    for (int c = 0; c < posc; c++)
                    {
                        y[yr][c] = x[r][c];
                    }

                    ycnt[yr] = posc;
                    yr++;
                }
            }
        }
    }

    // Display Y
    for (int r = 0; r < yr; r++)
    {
        for (int c = 0; c < ycnt[r]; c++)
        {
            cout << y[r][c] << " ";
        }

        cout << endl;
    }

    return 0;
}
