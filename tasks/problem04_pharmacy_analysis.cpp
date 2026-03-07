/*
Program: Vitamin Sales Analysis

Description:
This program reads data for several days in a pharmacy. For each day,
it reads the number of clients and their vitamin purchases (C and D).
It calculates the average age of clients who bought only Vitamin C,
finds the day with the lowest total Vitamin D sales, and counts
successive days that have the same number of clients.
*/

#include <iostream>
using namespace std;

int main()
{
    int nD;
    cin >> nD;

    int minDay = 1;
    int minVitaminD = -1;

    int prevClients = -1;
    int sameDaysCount = 0;

    for (int d = 1; d <= nD; d++)
    {
        int clients;
        cin >> clients;

        int totalVitaminD = 0;
        int sumAgeCOnly = 0;
        int countCOnly = 0;

        // process clients of the day
        for (int i = 0; i < clients; i++)
        {
            int age, vitC, vitD;
            cin >> age >> vitC >> vitD;

            totalVitaminD += vitD;

            // clients who bought only Vitamin C
            if (vitC > 0 && vitD == 0)
            {
                sumAgeCOnly += age;
                countCOnly++;
            }
        }

        // track day with lowest Vitamin D sales
        if (d == 1 || totalVitaminD < minVitaminD)
        {
            minVitaminD = totalVitaminD;
            minDay = d;
        }

        // print average age of C-only clients
        if (countCOnly > 0)
            cout << "Day " << d << " Average age (C only) = "
                 << (double)sumAgeCOnly / countCOnly << endl;
        else
            cout << "Day " << d << " Average age (C only) = 0" << endl;

        // count successive days with same number of clients
        if (d > 1 && clients == prevClients)
            sameDaysCount++;

        prevClients = clients;
    }

    // final results
    cout << "Day with lowest Vitamin D sales = " << minDay << endl;
    cout << "Number of successive days with same clients = "
         << sameDaysCount << endl;

    return 0;
}
