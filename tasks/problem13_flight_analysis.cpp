/*
Program: Flight Analysis

Description:
This program reads information for 3 flights (price, number of transit cities,
and departure month). It displays the cheapest flight in March and counts
how many flights have no transit cities.
*/

#include <iostream>
using namespace std;

int main()
{
    int price, transitCities, month;

    int minPrice = -1;     // cheapest flight in March
    int noTransitCount = 0;

    for(int i = 0; i < 3; i++)
    {
        cin >> price >> transitCities >> month;

        // check cheapest flight in March
        if(month == 3)
        {
            if(minPrice == -1 || price < minPrice)
                minPrice = price;
        }

        // count flights with no transit cities
        if(transitCities == 0)
            noTransitCount++;
    }

    cout << "Cheapest flight in March = " << minPrice << endl;
    cout << "Flights with no transit cities = " << noTransitCount << endl;

    return 0;
}