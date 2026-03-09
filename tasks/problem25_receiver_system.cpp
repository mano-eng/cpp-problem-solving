/*
Problem 25: Receiver System Installation

Description:
The program reads information for N houses that want to install
a receiver system. For each house, the user enters the type of
dish, the type of receiver, and the cable length in meters.

Dish prices:
Type 1 = 50
Type 2 = 150
Type 3 = 200

Receiver prices:
Type 1 = 500
Type 2 = 650
Type 3 = 800

Cable price:
1 meter = 3

The program calculates the total cost for each house,
determines the lowest system cost, and counts how many
houses use cables with length less than 20 meters.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int dish, receiver, meters;
    int count = 0;
    int minCost = 100000;

    for(int i = 1; i <= N; i++)
    {
        cin >> dish;
        cin >> receiver;
        cin >> meters;

        int price = 0;

        // dish price
        if(dish == 1)
            price += 50;
        else if(dish == 2)
            price += 150;
        else
            price += 200;

        // receiver price
        if(receiver == 1)
            price += 500;
        else if(receiver == 2)
            price += 650;
        else
            price += 800;

        // cable price
        price += meters * 3;

        // count cables < 20
        if(meters < 20)
            count++;

        // lowest cost
        if(price < minCost)
            minCost = price;
    }

    cout << "Lowest cost = " << minCost << endl;
    cout << "Houses with cable < 20 meters = " << count << endl;

    return 0;
}