/*
Problem 79 - Laundry Customers Analysis

Description:
This program processes data for N days.
For each day, it reads the number of customers.
For each customer, it reads number of dresses and shirts.

It calculates:
1) The average number of customers over N days.
2) For each day, counts customers who bring exactly 1 dress and 1 shirt.
3) Determines the day with the highest total number of shirts.
*/
#include <iostream>
using namespace std;

int main()
{
    int N, nc, nd, ns;

    int sum = 0;
    int ct = 0;

    double max = -9999;
    int pos = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> nc;

        sum += nc;
        ct++;

        int ctDay = 0;
        int sumShirts = 0;

        for (int d = 1; d <= nc; d++)
        {
            cin >> nd >> ns;

            if (nd == 1 && ns == 1)
                ctDay++;

            sumShirts += ns;
        }

        cout << ctDay << endl;

        if (sumShirts > max)
        {
            max = sumShirts;
            pos = i;
        }
    }

    double ave = 0;
    if (ct != 0)
        ave = sum / (double)ct;

    cout << ave << endl;
    cout << pos << endl;

    return 0;
}