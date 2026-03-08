/*

Description:
The program reads the distance, number of passengers, and price per passenger
for 5000 balloon trips. It counts how many trips carry more than 10 passengers
and determines which trip generated the largest income.
*/

#include <iostream>
using namespace std;

int main()
{
    int distance;
    int passengers;
    int price;

    int countTrips = 0;

    int maxIncome = -1;
    int bestTrip = 0;

    for(int i = 1; i <= 5000; i++)
    {
        cin >> distance;
        cin >> passengers;
        cin >> price;

        int income = passengers * price;

        if(passengers > 10)
            countTrips++;

        if(income > maxIncome)
        {
            maxIncome = income;
            bestTrip = i;
        }
    }

    cout << "Trips with more than 10 passengers = " << countTrips << endl;
    cout << "Trip with the largest income = " << bestTrip << endl;

    return 0;
}