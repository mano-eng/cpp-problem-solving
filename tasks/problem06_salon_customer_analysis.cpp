/*
Program: Barber Shop Monthly Analysis

Description:
This program analyzes customer data for a barber shop over several days.
For each customer, it reads the type (Man or Kid), haircut duration,
waiting time, and price. The program calculates the daily income and
prints it only if the number of kids is greater than the number of men.
It also tracks the longest total time (duration + waiting) spent by
any customer during the month.
*/

#include <iostream>
using namespace std;

int main()
{
    int D;                 // number of days
    cout << "Enter number of days: ";
    cin >> D;

    int N;                 // number of customers in a day
    int d, w, p;           // haircut duration, waiting time, price
    char T;                // customer type (M / K)

    int maxTime = -1;      // maximum (duration + waiting)

    // process each day
    for (int day = 0; day < D; day++)
    {
        cout << "Enter number of customers: ";
        cin >> N;

        int kids = 0;
        int men = 0;
        int income = 0;

        // process customers of the day
        for (int i = 0; i < N; i++)
        {
            cout << "Enter customer type (M/K): ";
            cin >> T;

            cout << "Enter duration of haircut: ";
            cin >> d;

            cout << "Enter waiting time: ";
            cin >> w;

            cout << "Enter price: ";
            cin >> p;

            income += p;

            if (T == 'K')
                kids++;

            if (T == 'M')
                men++;

            // update longest service + waiting time
            if ((d + w) > maxTime)
                maxTime = d + w;
        }

        // print income if kids > men
        if (kids > men)
        {
            cout << "Income of this day = " << income << endl;
        }
    }

    // final result
    cout << "Longest time spent by a customer = " << maxTime << endl;

    return 0;
}
