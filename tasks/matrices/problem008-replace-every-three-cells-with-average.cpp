#include <iostream>
using namespace std;

int main()
{
    int X[99][99];

    // Read Matrix
    for (int r = 0; r < 99; r++)
    {
        for (int c = 0; c < 99; c++)
        {
            cin >> X[r][c];
        }
    }

    // Calculate the average of every 3 contiguous cells
    for (int r = 0; r < 99; r++)
    {
        for (int c = 0; c < 99; c += 3)
        {
            int avg = (X[r][c] + X[r][c + 1] + X[r][c + 2]) / 3;

            X[r][c] = avg;
            X[r][c + 1] = avg;
            X[r][c + 2] = avg;
        }
    }

    // Display Matrix
    for (int r = 0; r < 99; r++)
    {
        for (int c = 0; c < 99; c++)
        {
            cout << X[r][c] << " ";
        }

        cout << endl;
    }

    return 0;
}
