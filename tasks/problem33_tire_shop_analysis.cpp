/*
Problem 33: Tire Shop Analysis

Description:
A tire shop sells different types of tires. For each tire we need to know:
1) The type of the tire (A, B, or C)
2) The size of the tire
3) The price of the tire

The program reads the information for N tires and performs the following tasks:
- Calculate the average price of tires from type B.
- Determine the most expensive tire in the shop.

Language: C++
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N; // number of tires

    char type;
    int size;
    double price;

    double sumB = 0;
    int countB = 0;

    double maxPrice = 0;

    for(int i = 0; i < N; i++)
    {
        // read tire data
        cin >> type;
        cin >> size;
        cin >> price;

        // check if tire type is B
        if(type == 'B')
        {
            sumB += price;
            countB++;
        }

        // check most expensive tire
        if(price > maxPrice)
        {
            maxPrice = price;
        }
    }

    double averageB = 0;

    if(countB > 0)
    {
        averageB = sumB / countB;
    }

    // output results
    cout << "Average price of type B tires = " << averageB << endl;
    cout << "Most expensive tire price = " << maxPrice << endl;

    return 0;
}