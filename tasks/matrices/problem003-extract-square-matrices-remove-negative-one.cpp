// Read Matrix
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


// Find the row that contains exactly two -1
void Find(int X[][100], int m, int n,
          int &posr, int &posc1, int &posc2)
{
    for (int r = 0; r < m; r++)
    {
        int cnt = 0;

        for (int c = 0; c < n; c++)
        {
            if (X[r][c] == -1)
            {
                cnt++;

                if (cnt == 1)
                {
                    posr = r;
                    posc1 = c;
                }
                else if (cnt == 2)
                {
                    posc2 = c;
                }
            }
        }

        if (cnt == 2)
        {
            break;   // found the required row
        }
    }
}


// Copy the required Width x Width sub-matrix to Z
void Copy(int X[][100], int m, int n,
          int posr, int posc1, int posc2,
          int Z[][200], int &zr, int &width)
{
    width = posc2 - posc1 + 1;

    int startRow = posr - width + 1;

    for (int r = startRow; r <= posr; r++)
    {
        for (int c = posc1; c <= posc2; c++)
        {
            Z[zr][c - posc1] = X[r][c];
        }

        zr++;
    }
}


// Create Q by removing -1 from each row
void CreateQ(int Z[][200], int Q[][200],
             int zr, int widthX, int widthY)
{
    for (int r = 0; r < zr; r++)
    {
        int cq = 0;

        int width;

        if (r < widthX)
        {
            width = widthX;
        }
        else
        {
            width = widthY;
        }

        for (int c = 0; c < width; c++)
        {
            if (Z[r][c] != -1)
            {
                Q[r][cq] = Z[r][c];
                cq++;
            }
        }
    }
}


void main()
{
    int X[100][100];
    int Y[100][100];
    int Z[100][200];
    int Q[100][200];

    int m, n;

    int posr1, posc1, posc2;
    int posr2, posc3, posc4;

    int widthX, widthY;

    int zr = 0;


    // Read size and matrices
    cin >> m >> n;

    Read(X, m, n);
    Read(Y, m, n);


    // Find and copy X sub-matrix
    Find(X, m, n, posr1, posc1, posc2);

    Copy(X, m, n,
         posr1, posc1, posc2,
         Z, zr, widthX);


    // Find and copy Y sub-matrix
    Find(Y, m, n, posr2, posc3, posc4);

    Copy(Y, m, n,
         posr2, posc3, posc4,
         Z, zr, widthY);


    // Create Q without -1
    CreateQ(Z, Q, zr, widthX, widthY);


    // Print Q
    for (int r = 0; r < zr; r++)
    {
        int width;

        if (r < widthX)
            width = widthX;
        else
            width = widthY;

        for (int c = 0; c < width; c++)
        {
            if (Q[r][c] != -1)
                cout << Q[r][c] << " ";
        }

        cout << endl;
    }
}
