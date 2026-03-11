/*
Problem: Car Garage Parking Analysis

Description:
This program analyzes parking information for N garages.
For each garage we read:
1) Number of parking floors.
2) Number of parking spots per floor.
3) Number of workers managing the garage.

Rules:
- Cost per worker = 30 L.E.
- Total parking spots = floors * spots per floor.

The program determines:
1) The garage with the highest management cost.
2) How many garages have more than 500 parking spots.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N; // number of garages

    int floors;
    int spotsPerFloor;
    int workers;

    int maxCost = 0;
    int position = 0;
    int countLargeGarages = 0;

    for(int i = 1; i <= N; i++)
    {
        // Read garage information
        cin >> floors;
        cin >> spotsPerFloor;
        cin >> workers;

        // Calculate total parking spots
        int totalSpots = floors * spotsPerFloor;

        // Calculate management cost
        int cost = workers * 30;

        // Check highest cost
        if(cost > maxCost)
        {
            maxCost = cost;
            position = i;
        }

        // Check if parking spots exceed 500
        if(totalSpots > 500)
        {
            countLargeGarages++;
        }
    }

    cout << "Most costly garage position = " << position << endl;
    cout << "Garages with parking spots > 500 = " << countLargeGarages << endl;

    return 0;
}