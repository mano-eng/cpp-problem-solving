#include <iostream>
using namespace std;

int main()
{
    int x[4][4];
    int num;
    int count = 0;

    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            cin >> x[r][c];
        }
    }

    cout << "Enter number: ";
    cin >> num;

    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            if (x[r][c] == num)
            {
                cout << r << ", " << c << endl;
                count++;
            }
        }
    }

    if (count == 0)
    {
        cout << "Number not found" << endl;
    }

    return 0;
}
