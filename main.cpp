#include <iostream>
using namespace std;

/*
 Program Description:
 This program calculates:
 1- The income for a day if number of kids > number of men.
 2- The maximum total time (duration + waiting) for all customers.
*/

int main()
{
    const int days = 30;   // Number of days in the month
    int maxTime = 0;

    for (int d = 1; d <= days; d++)
    {
        int N;
        cout << "\nEnter number of customers for day " << d << ": ";
        cin >> N;

        int kids = 0, men = 0;
        int income = 0;

        for (int i = 0; i < N; i++)
        {
            char type;
            int duration, waiting, price;

            cout << "Enter (Type K/M, Duration, Waiting, Price): ";
            cin >> type >> duration >> waiting >> price;

            int totalTime = duration + waiting;

            if (totalTime > maxTime)
                maxTime = totalTime;

            if (type == 'K')
                kids++;
            else if (type == 'M')
                men++;

            income += price;
        }

        if (kids > men)
        {
            cout << "Income for day " << d << " = " << income << endl;
        }
    }

    cout << "\nMaximum total time = " << maxTime << endl;

    return 0;
}