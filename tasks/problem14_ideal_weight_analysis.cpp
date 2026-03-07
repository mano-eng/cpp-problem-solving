/*
Program: Ideal Weight Analysis

Description:
This program reads the weight and height of 3 persons.
It finds the minimum weight, counts how many persons
have ideal weight (weight <= height - 110), and
calculates the average weight of persons who exceed
the ideal weight.
*/

#include <iostream>
using namespace std;

int main()
{
    int weight, height;

    int minWeight;
    int idealCount = 0;

    int sumExceed = 0;
    int countExceed = 0;

    for(int i = 0; i < 3; i++)
    {
        cin >> weight >> height;

        // track minimum weight
        if(i == 0 || weight < minWeight)
            minWeight = weight;

        // check ideal weight
        if(weight <= height - 110)
            idealCount++;
        else
        {
            sumExceed += weight;
            countExceed++;
        }
    }

    cout << "Minimum weight = " << minWeight << endl;
    cout << "Number of ideal persons = " << idealCount << endl;

    // average weight of persons exceeding ideal
    if(countExceed > 0)
        cout << "Average weight exceeding ideal = "
             << (double)sumExceed / countExceed << endl;
    else
        cout << "Average weight exceeding ideal = 0" << endl;

    return 0;
}