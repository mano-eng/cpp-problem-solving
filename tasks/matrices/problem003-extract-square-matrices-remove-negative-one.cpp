#include <iostream>
using namespace std;

// =========================
// Read Matrix
// =========================
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

// =========================
// Find the row that contains exactly two -1
// Calculate Width and Start Row
// =========================
void Find(int X[][100], int m, int n,
          int &posr1, int &posc1, int &posc2,
          int &width, int &startRow)
{
    for (int r = 0; r < m; r++)
    {
        int cnt = 0;

        for (int c = 0; c < n; c++)
        {
            if (X[r][c] == -1)
            {
                cnt++;

                // First -1
                if (cnt == 1)
                {
                    posr1 = r;
                    posc1 = c;
                }

                // Second -1
                else if (cnt == 2)
                {
                    posc2 = c;
                }
            }
        }

        // Found the required row
        if (cnt == 2)
        {
            // Calculate Width
            width = posc2 - posc1 + 1;

            // Calculate first Row
            startRow = posr1 - width + 1;

            break;
        }
    }
}

// =========================
// Copy the selected sub-matrix to Z
// =========================
void Copy(int X[][100],
          int startRow, int posr1,
          int posc1, int posc2,
          int Z[][200], int &zr, int &zc)
{
    for (int r = startRow; r <= posr1; r++)
    {
        for (int c = posc1; c <= posc2; c++)
        {
            Z[zr][zc] = X[r][c];

            // Move to next Column in Z
            zc++;
        }

        // Move to next Row in Z
        zr++;

        // Start from first Column
        zc = 0;
    }
}

// =========================
// Create Q without -1
// =========================
void CreateQ(int Z[][200], int Q[][200],
             int qcnt[], int zr,
             int widthX, int widthY)
{
    for (int r = 0; r < zr; r++)
    {
        // Start Q from Column 0 for every Row
        int cq = 0;

        int width;

        // X part
        if (r < widthX)
        {
            width = widthX;
        }
        // Y part
        else
        {
            width = widthY;
        }

        for (int c = 0; c < width; c++)
        {
            // Ignore -1
            if (Z[r][c] != -1)
            {
                Q[r][cq] = Z[r][c];

                // Move to next Column in Q
                cq++;
            }
        }

        // Save number of values in this Row
        qcnt[r] = cq;
    }
}

// =========================
// Main
// =========================
void main()
{
    // X matrix
    int x[100][100];

    // Y matrix
    int y[100][100];

    // Z matrix
    int z[100][200];

    // Q matrix
    int q[100][200];

    // Number of rows and columns
    int m, n;

    // Position of the first -1
    int posr1, posc1;

    // Column position of the second -1
    int posc2;

    // Width of current sub-matrix
    int width;

    // First row of current sub-matrix
    int startRow;

    // Width of X sub-matrix
    int widthX;

    // Width of Y sub-matrix
    int widthY;

    // Current Row in Z
    int zr = 0;

    // Current Column in Z
    int zc = 0;

    // Number of values in each row of Q
    int qcnt[100];

    // =========================
    // Read m and n
    // =========================
    cin >> m >> n;

    // =========================
    // Read X
    // =========================
    Read(x, m, n);

    // =========================
    // Read Y
    // =========================
    Read(y, m, n);

    // =========================
    // Find and Calculate X
    // =========================
    Find(x, m, n,
         posr1, posc1, posc2,
         width, startRow);

    widthX = width;

    // =========================
    // Copy X sub-matrix to Z
    // =========================
    Copy(x, startRow, posr1,
         posc1, posc2,
         z, zr, zc);

    // =========================
    // Find and Calculate Y
    // =========================
    Find(y, m, n,
         posr1, posc1, posc2,
         width, startRow);

    widthY = width;

    // =========================
    // Copy Y sub-matrix to Z
    // =========================
    Copy(y, startRow, posr1,
         posc1, posc2,
         z, zr, zc);

    // =========================
    // Create Q
    // =========================
    CreateQ(z, q, qcnt, zr, widthX, widthY);

    // =========================
    // Print Q
    // =========================
    for (int r = 0; r < zr; r++)
    {
        for (int c = 0; c < qcnt[r]; c++)
        {
            cout << q[r][c] << " ";
        }

        cout << endl;
    }
}
