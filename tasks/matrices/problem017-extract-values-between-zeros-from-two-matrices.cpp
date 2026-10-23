#include <iostream>
using namespace std;

int main()
{
    int X[100][100], Y[100][100], Z[100][100];
    int m, n;

    cin >> m >> n;

    // Read X
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> X[r][c];
        }
    }

    // Read Y
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> Y[r][c];
        }
    }

    int zsize[100];

    // Create Z
    for (int r = 0; r < m; r++)
    {
        int pos1 = 0, pos2 = 0;
        int ct = 0;

        // Find the two zeros in X
        for (int c = 0; c < n; c++)
        {
            if (X[r][c] == 0)
            {
                if (ct == 0)
                {
                    pos1 = c;
                }
                else
                {
                    pos2 = c;
                }

                ct++;
            }
        }

        zsize[r] = 0;

        // Copy values between zeros from X
        for (int c = pos1 + 1; c < pos2; c++)
        {
            Z[r][zsize[r]] = X[r][c];
            zsize[r]++;
        }

        // Copy values from the same region in Y
        for (int c = pos1 + 1; c < pos2; c++)
        {
            Z[r][zsize[r]] = Y[r][c];
            zsize[r]++;
        }
    }

    // Display rows with exactly 6 elements
    for (int r = 0; r < m; r++)
    {
        if (zsize[r] == 6)
        {
            for (int c = 0; c < zsize[r]; c++)
            {
                cout << Z[r][c];

                if (c < zsize[r] - 1)
                {
                    cout << ", ";
                }
            }

            cout << endl;
        }
    }

    return 0;
}
