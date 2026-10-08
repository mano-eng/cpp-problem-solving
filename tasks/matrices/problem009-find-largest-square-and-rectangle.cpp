#include <iostream>
using namespace std;

int main()
{
    int X[20][20];

    // Read Matrix
    for (int r = 0; r < 20; r++)
    {
        for (int c = 0; c < 20; c++)
        {
            cin >> X[r][c];
        }
    }

    int maxSquare = -9999999;
    int maxRectangle = -9999999;

    int sr1, sc1, sr2, sc2;
    int rr1, rc1, rr2, rc2;

    // Try all possible rectangles
    for (int r1 = 0; r1 < 20; r1++)
    {
        for (int c1 = 0; c1 < 20; c1++)
        {
            for (int r2 = r1; r2 < 20; r2++)
            {
                for (int c2 = c1; c2 < 20; c2++)
                {
                    int height = r2 - r1 + 1;
                    int width = c2 - c1 + 1;

                    int sum = 0;

                    // Calculate sum
                    for (int r = r1; r <= r2; r++)
                    {
                        for (int c = c1; c <= c2; c++)
                        {
                            sum += X[r][c];
                        }
                    }

                    // Square
                    if (height == width)
                    {
                        if (sum > maxSquare)
                        {
                            maxSquare = sum;

                            sr1 = r1;
                            sc1 = c1;
                            sr2 = r2;
                            sc2 = c2;
                        }
                    }

                    // Rectangle
                    else
                    {
                        if (sum > maxRectangle)
                        {
                            maxRectangle = sum;

                            rr1 = r1;
                            rc1 = c1;
                            rr2 = r2;
                            rc2 = c2;
                        }
                    }
                }
            }
        }
    }

    // Display Largest Square
    cout << "Largest Square: ";
    cout << "[" << sr1 << "," << sc1 << "] -> ";
    cout << "[" << sr2 << "," << sc2 << "]" << endl;

    cout << "Sum = " << maxSquare << endl;

    // Display Largest Rectangle
    cout << "Largest Rectangle: ";
    cout << "[" << rr1 << "," << rc1 << "] -> ";
    cout << "[" << rr2 << "," << rc2 << "]" << endl;

    cout << "Sum = " << maxRectangle << endl;

    return 0;
}
