/*
Program: Car Washer Analysis

Description:
This program simulates a car washer working for several days.

For each day:
- The worker washes cars one by one.
- The working day ends when:
  1) Total money collected becomes more than 200 L.E.
  OR
  2) Total working time becomes more than 180 minutes.

For each car we read:
- Duration of washing (minutes)
- Price of washing
- Amount of washing powder used (grams)

The program will:
1) Calculate the average price for cars that took more than 100 minutes.
2) Determine which day consumed the largest amount of washing powder
   but only during the first 90 minutes of the day.
*/

#include <iostream>
using namespace std;

int main()
{
    int nD;                     // number of days
    cout << "Enter number of days: ";
    cin >> nD;

    int duration, price, powder;    // car data
    int totalTime, totalMoney;      // total time and money for each day

    int sumPrice = 0;               // sum of prices for cars >100 minutes
    int countCars = 0;              // counter for those cars

    int sumPowder;                  // powder used in first 90 minutes
    int maxPowder = -1;             // largest powder consumption
    int dayIndex = 0;               // day with largest powder

    // loop over days
    for(int d = 1; d <= nD; d++)
    {
        totalTime = 0;
        totalMoney = 0;
        sumPowder = 0;

        cout << "Day " << d << endl;

        // worker washes cars until day ends
        while(totalMoney <= 200 && totalTime <= 180)
        {
            cout << "Enter duration, price, powder: ";
            cin >> duration >> price >> powder;

            // update total time and total money
            totalTime += duration;
            totalMoney += price;

            // requirement 1
            // if washing time > 100 minutes we include its price in average
            if(duration > 100)
            {
                sumPrice += price;
                countCars++;
            }

            // requirement 2
            // count powder only in first 90 minutes
            if(totalTime <= 90)
            {
                sumPowder += powder;
            }
        }

        // determine which day used the largest powder
        if(sumPowder > maxPowder)
        {
            maxPowder = sumPowder;
            dayIndex = d;
        }
    }

    // calculate average price
    double avg = 0;

    if(countCars > 0)
        avg = (double)sumPrice / countCars;

    // results
    cout << "Average price for cars with duration > 100 minutes = " << avg << endl;
    cout << "Day with largest powder consumption in first 90 minutes = " << dayIndex << endl;

    return 0;
}