/*
Program: Software Shop Billing

Description:
This program calculates the total cost of buying three software applications.
If the total cost exceeds 1200$, a 10% discount is applied.
It also finds the largest number of items purchased and counts
how many applications have more than 5 items.
*/

#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3;   // number of items for each application

    cout << "For 1st application: ";
    cin >> a1;

    cout << "For 2nd application: ";
    cin >> a2;

    cout << "For 3rd application: ";
    cin >> a3;

    // calculate total cost
    double total = a1*120 + a2*105 + a3*85;

    // apply discount
    if(total > 1200)
        total = total * 0.9;

    // largest number of items
    int maxItems = a1;

    if(a2 > maxItems)
        maxItems = a2;

    if(a3 > maxItems)
        maxItems = a3;

    // count applications with items > 5
    int count = 0;

    if(a1 > 5) count++;
    if(a2 > 5) count++;
    if(a3 > 5) count++;

    cout << "The whole cost: " << total << endl;
    cout << "Largest number of items taken was: " << maxItems << endl;
    cout << "Applications taken by the user > 5 items: " << count << endl;

    return 0;
}