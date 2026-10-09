#include <iostream>
using namespace std;

int main()
{
    int X[100][200];

    // 1- Read Matrix
    for (int r = 0; r < 100; r++)
    {
        for (int c = 0; c < 200; c++)
        {
            cin >> X[r][c];
        }
    }

    // 2- Read Target
    int target;
    cin >> target;

    // 3- Find Target occurrences
    int count = 0;

    int posr1 = 0, posc1 = 0;
    int posr2 = 0, posc2 = 0;

    for (int r = 0; r < 100; r++)
    {
        for (int c = 0; c < 200; c++)
        {
            if (X[r][c] == target)
            {
                count++;

                if (count == 1)
                {
                    posr1 = r;
                    posc1 = c;
                }
                else if (count == 2)
                {
                    posr2 = r;
                    posc2 = c;
                }
            }
        }
    }

    // 4- Calculate the sum of the rectangle
    if (count == 2)
    {
        int sum = 0;

        for (int r = posr1; r <= posr2; r++)
        {
            for (int c = posc1; c <= posc2; c++)
            {
                sum += X[r][c];
            }
        }

        cout << "Sum = " << sum << endl;
    }

    return 0;
}
