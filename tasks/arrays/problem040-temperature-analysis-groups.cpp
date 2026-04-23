/* 
Problem 040

Description:
Analyzes temperatures in groups of 10 days by finding minimum, 
average, and days above average.
*/
#include <iostream>
using namespace std;

int main()
{
    int X[30], choice;
    int pos, sum = 0;
    float ave;
    int min;

    // قراءة القيم
    for(int i = 0; i < 30; i++)
        cin >> X[i];

    cin >> choice;

    // ================== choice 1 ==================
    if(choice == 1)
    {
        for(int i = 0; i < 30; i += 10)
        {
            min = X[i];

            for(int j = i; j < i + 10; j++)
            {
                if(min > X[j])
                {
                    min = X[j];
                    pos = j;
                }
            }

            cout << pos + 1 << endl;
        }
    }

    // ================== choice 2 ==================
    else if(choice == 2)
    {
        for(int i = 0; i < 30; i += 10)
        {
            sum = 0;

            for(int j = i; j < i + 10; j++)
                sum += X[j];

            ave = sum / 10.0;

            cout << ave << endl;
        }
    }

    // ================== choice 3 ==================
    else if(choice == 3)
    {
        for(int i = 0; i < 30; i += 10)
        {
            sum = 0;

            for(int j = i; j < i + 10; j++)
                sum += X[j];

            ave = sum / 10.0;

            for(int j = i; j < i + 10; j++)
            {
                if(X[j] > ave)
                    cout << j + 1 << " ";
            }

            cout << endl;
        }
    }

    return 0;
}
