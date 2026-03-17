/*
Problem - Juice Shop Analysis

Description:
This program processes data for 30 days.
For each day, it reads temperature and number of customers.
For each customer, it reads juice type, cup size, and price.

It determines:
1) The day with the lowest number of customers.
2) The number of large cups sold on the hottest day.
*/

#include <iostream>
using namespace std;

int main()
{
    int minCustomers = 9999;
    int dayMin = 0;

    double maxTemp = -9999;
    int largeCountAtMaxTemp = 0;

    for(int day = 1; day <= 30; day++)
    {
        double temp;
        int customers;

        cin >> temp >> customers;

        // أقل عدد عملاء
        if(customers < minCustomers)
        {
            minCustomers = customers;
            dayMin = day;
        }

        int largeCount = 0;

        for(int i = 1; i <= customers; i++)
        {
            string type;
            char size;
            double price;

            cin >> type >> size >> price;

            if(size == 'L')
                largeCount++;
        }

        // أعلى درجة حرارة
        if(temp > maxTemp)
        {
            maxTemp = temp;
            largeCountAtMaxTemp = largeCount;
        }
    }

    cout << "Day with lowest customers = " << dayMin << endl;
    cout << "Large cups on hottest day = " << largeCountAtMaxTemp << endl;

    return 0;
}