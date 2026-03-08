/*
Problem 23: Room Building Cost Analysis

Description:
The program reads information for 2000 rooms including:
number of bricks, brick type, number of days to build the room,
and the payment per day for workers.

Brick prices:
Type 1 = 1.5 L.E per brick
Type 2 = 1.7 L.E per brick

The program counts how many rooms were built using type 2 bricks
and finds the cost of the most expensive room.
*/

#include <iostream>
using namespace std;

int main()
{
    int bricks, type, days, payment;

    int countType2 = 0;
    double maxCost = -1;

    for(int i = 0; i < 2000; i++)
    {
        cin >> bricks;
        cin >> type;
        cin >> days;
        cin >> payment;

        double brickPrice;

        if(type == 1)
            brickPrice = 1.5;
        else
            brickPrice = 1.7;

        double bricksCost = bricks * brickPrice;
        int laborCost = days * payment;

        double totalCost = bricksCost + laborCost;

        if(type == 2)
            countType2++;

        if(totalCost > maxCost)
            maxCost = totalCost;
    }

    cout << "Rooms using type 2 bricks = " << countType2 << endl;
    cout << "Most expensive room cost = " << maxCost << endl;

    return 0;
}