#include <iostream>
using namespace std;

int main()
{
    int x[20][100];

    // Read the rank of 20 clubs for 100 years
    for (int r = 0; r < 20; r++)
    {
        for (int c = 0; c < 100; c++)
        {
            cin >> x[r][c];
        }
    }

    // Choose a club
    int club;
    cin >> club;

    // 1. Display the maximum rank of the selected club
    int max = -9999999;

    for (int c = 0; c < 100; c++)
    {
        if (x[club][c] > max)
        {
            max = x[club][c];
        }
    }

    cout << "Maximum rank = " << max << endl;


    // 2. Display each club which got the 1st rank
    cout << "Clubs which got the 1st rank:" << endl;

    for (int r = 0; r < 20; r++)
    {
        for (int c = 0; c < 100; c++)
        {
            if (x[r][c] == 1)
            {
                cout << "Club " << r << endl;
                break;
            }
        }
    }


    // 3. Display the club of the century
    int max1 = -9999999;
    int pos = 0;

    for (int r = 0; r < 20; r++)
    {
        int count = 0;

        for (int c = 0; c < 100; c++)
        {
            if (x[r][c] == 1)
            {
                count++;
            }
        }

        if (count > max1)
        {
            max1 = count;
            pos = r;
        }
    }

    cout << "Club of the century = Club " << pos << endl;

    return 0;
}
