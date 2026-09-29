
void main()
{
    int z[100][200];

    int y[100][100];
    int x[100][100];

    int m, n;

    cin >> m >> n;

    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> x[r][c];
        }
    }

    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> y[r][c];
        }
    }

    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if (x[r][c] == 0)
            {
                posr1 = r;
                posc1 = c;
                break;
            }
        }

        for (int c = posc1 + 1; c < n; c++)
        {
            if (x[r][c] == 0)
            {
                posr2 = r;  // r يعني Row
                posc2 = c;  // c يعني Col
            }
        }

        int cz = 0;  // اللي هو الـ Column بتاع الـ Z

        for (int c = posc1 + 1; c < posc2; c++)
        {
            z[r][cz] = x[r][c];
            cz++;
        }

        for (int c = posc1 + 1; c < posc2; c++)
        {
            z[r][cz] = y[r][c];
            cz++;
        }
    }
}
