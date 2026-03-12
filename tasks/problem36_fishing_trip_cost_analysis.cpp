/*
Problem 36: Fishing Trip Cost Analysis

Description:
This program reads information for N fishing trips.

For each fishing trip we read:
1) Number of persons in the trip.
2) Number of hooks used in the trip.
3) Cost of renting the boat.
4) Cost of renting one hook.

The program performs the following tasks:
- Determines the most expensive fishing trip.
- Calculates the average number of hooks for trips that involved more than 5 persons.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;   // number of fishing trips

    int persons;
    int hooks;
    double boatCost;
    double hookCost;

    double maxTripCost = -999;
    int tripPosition = 0;

    int countTrips = 0;
    int totalHooks = 0;

    for(int i = 1; i <= N; i++)
    {
        cin >> persons;
        cin >> hooks;
        cin >> boatCost;
        cin >> hookCost;

        // Calculate total cost of the trip
        double tripCost = boatCost + (hooks * hookCost);

        // Determine the most expensive trip
        if(tripCost > maxTripCost)
        {
            maxTripCost = tripCost;
            tripPosition = i;
        }

        // Trips with more than 5 persons
        if(persons > 5)
        {
            countTrips++;
            totalHooks += hooks;
        }
    }

    double averageHooks = totalHooks / countTrips;

    cout << "Most expensive trip position = " << tripPosition << endl;
    cout << "Average number of hooks (persons > 5) = " << averageHooks << endl;

    return 0;
}