/*
Program: Daily Calories Analysis

Description:
This program reads meal information for 3 persons including body weight
and number of apples, steaks, and omelets eaten. It calculates the total
calories consumed, checks how many persons exceed their body calorie
needs, and displays the total calories consumed by the three persons.
*/

#include <iostream>
using namespace std;

int main()
{
    int weight;
    int apples, steaks, omelets;

    int exceedCount = 0;
    int totalCaloriesAll = 0;

    for(int i = 0; i < 3; i++)
    {
        cin >> weight;
        cin >> apples;
        cin >> steaks;
        cin >> omelets;

        // calories eaten
        int totalCalories = apples*75 + steaks*45 + omelets*128;

        // body needs
        int needs = 9 * weight * 24;

        totalCaloriesAll += totalCalories;

        // check if exceeded
        if(totalCalories > needs)
            exceedCount++;
    }

    cout << "Persons exceeding body needs = " << exceedCount << endl;
    cout << "Total calories for the 3 persons = " << totalCaloriesAll << endl;

    return 0;
}