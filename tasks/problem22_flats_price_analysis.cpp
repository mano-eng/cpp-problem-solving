/*
Problem 22: Flats Price Analysis

Description:
The program reads the area and price per meter for N flats.
It calculates the price of each flat and determines the price
of the cheapest flat. It also counts how many flats have a
price less than 100000 L.E.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "please enter the number of flats : ";
    cin >> N;

    int area;
    int pricePerMeter;

    int minPrice = 1000000000;
    int count = 0;

    for(int i = 0; i < N; i++)
    {
        cout << "Enter area : ";
        cin >> area;

        cout << "Enter the price per meter : ";
        cin >> pricePerMeter;

        int price = area * pricePerMeter;

        if(price < minPrice)
            minPrice = price;

        if(price < 100000)
            count++;
    }

    cout << "The price of the cheapest flat : " << minPrice << endl;
    cout << "Number of flats < 100000 : " << count << endl;

    return 0;
}